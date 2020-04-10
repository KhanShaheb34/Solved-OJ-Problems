#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(ll cs) {
    ll n, x, s;
    cin >> n >> x;
    vector<ll> savings;
    for (ll i = 0; i < n; i++) {
        cin >> s;
        savings.push_back(s);
    }
    sort(savings.begin(), savings.end(), greater<int>());
 
    ll sum = 0, it;
    for(it=0; it<n; it++) {
        sum += savings[it];
        if(sum < (it+1) * x) {
            break;
        }
    }
 
    cout << it << endl;
    
}
 
int main() {
    ll t;
    cin >> t;
    for(ll i = 0; i < t; i++) {
        solve(i+1);
    }
    return 0;
}
