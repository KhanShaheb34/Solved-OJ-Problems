#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    set<string> squares;
    for(int i=1; i*i<2000000000; i++) {
        squares.insert(to_string(i*i));
    }
    string s;
    cin >> s;
    int n = s.length();
    int dellim = pow(2, n);
    int dels = INT_MAX;
    for(int del = 1; del < dellim; del++) {
        bitset<10> delset(del);
        string tmp = "";
        for(int i = 0; i < n; i++) 
            if(delset[i]) tmp += s[i];
        if(squares.find(tmp) != squares.end())
            dels = min(dels, (int)(n-tmp.length()));
    }
    cout << (dels == INT_MAX ? -1 : dels) << endl;
}

int main() {
    FastIO; solve();
    return 0;
}
