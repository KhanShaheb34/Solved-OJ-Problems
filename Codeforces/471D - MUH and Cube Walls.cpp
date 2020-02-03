//https://codeforces.com/problemset/problem/471/D
#include<bits/stdc++.h>
using namespace std;

vector<int> lps;

void calculateLPS(vector<int> b) {
    lps.push_back(0);
    int w = b.size();
    int check = 0;
    for(int i=1; i<w; i++) {
        if(b[i] == b[check]) {
            lps.push_back(++check);
        }
        else {
            if(check!=0){
                check = lps[check-1];
                i--;
            }
            else {
                lps.push_back(0);
            }
        }
    } 
}

int patternSearch(vector<int> a, vector<int> b) {
    int n = a.size();
    int w = b.size();
    int j = 0, ans = 0;
    for(int i=0; i<n;) {
        if(a[i] == b[j]) {
            j++; i++;
        }
        if(j==w){
            ans++;
            j = lps[j-1];
        }
        else if(i<n && a[i]!=b[j]) {
            if(j != 0) j = lps[j-1];
            else i++;
        }
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int n, w, x, y = 0;
    cin >> n >> w;
    vector<int> a, b;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if(i > 0) a.push_back(x-y);
        y = x;
    }
    for (int i = 0; i < w; i++) {
        cin >> x;
        if(i > 0) b.push_back(x-y);
        y = x;
    }
    if(w == 1) {
        cout << n << endl;
        return 0;
    }
    if(w > n) {
        cout << 0 << endl;
        return 0;
    }

    calculateLPS(b);
    int ans = patternSearch(a, b);
    cout << ans << endl;

    return 0;
}
