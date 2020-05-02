#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(ll cs) {
    int n, minc = INT_MAX, maxc = INT_MIN, x;
    cin >> n;
    vector<int> a;
    for(int i=0; i<n; i++) {
        cin >> x;
        a.push_back(x);
    }
    int curr = 1;
    for(int i=1; i<=n; i++) {
        if(i < n && abs(a[i] - a[i-1]) < 3)
            curr++;
        else {
            minc = min(minc, curr);
            maxc = max(maxc, curr);
            curr = 1;
        }
    }
    cout << minc << " " << maxc << endl;
}

int main() {
    FastIO; ll t; cin >> t;
    for(ll i = 0; i < t; i++) solve(i+1);
    return 0;
}
