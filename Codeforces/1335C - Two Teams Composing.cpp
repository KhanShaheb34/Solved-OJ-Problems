#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(ll cs) {
    int n, x;
    cin >> n;
    set<int> dist;
    map<int, int> ocur;
    int mxoc = INT_MIN;
    for(int i=0; i<n; i++) {
        cin >> x;
        ocur[x]++;
        dist.insert(x);
        mxoc = max(mxoc, ocur[x]);
    }
    int a = mxoc, b = dist.size();
    if(b >= a) b--;
    cout << min(a, b) << endl;

}

int main() {
    ll t;
    cin >> t;
    for(ll i = 0; i < t; i++) {
        solve(i+1);
    }
    return 0;
}
