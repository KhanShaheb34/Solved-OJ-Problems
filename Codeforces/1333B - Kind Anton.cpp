#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(ll cs) {
    int n, x;
    cin >> x;
    vector<vector<bool> > state;
    vector<bool> cstate(3, false);
    vector<int> a;
    for(int i=0; i<x; i++) {
        cin >> n;
        a.push_back(n);
        if(n==-1) cstate[0] = true;
        if(n==0) cstate[1] = true;
        if(n==1) cstate[2] = true;
        state.push_back(cstate);
    }
    bool possible = true;
    for(int i=0; i<x; i++) {
        cin >> n;
        if(!possible && n == a[i]) continue;
        if(i==0 && n != a[0]) {
            possible = false;
            continue;
        }
        if(n < a[i] && !state[i-1][0]) possible = false;
        if(n > a[i] && !state[i-1][2]) possible = false;  
    }

    cout << (possible ? "YES" : "NO") << endl;
}

int main() {
    ll t;
    cin >> t;
    for(ll i = 0; i < t; i++) {
        solve(i+1);
    }
    return 0;
}
