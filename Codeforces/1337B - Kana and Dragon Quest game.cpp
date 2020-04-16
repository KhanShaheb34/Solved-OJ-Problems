#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
void solve(ll cs) {
    ll x, n, m;
    cin >> x >> n >> m;
    bool yes = false;
    while(n-- && x > 20) {
        x = (x/2) + 10;
    }
    if(x <= m*10) yes = true;
    cout << (yes ? "YES" : "NO") << endl;
}
 
int main() {
    FastIO;
    ll t;
    cin >> t;
    for(ll i = 0; i < t; i++) {
        solve(i+1);
    }
    return 0;
}
