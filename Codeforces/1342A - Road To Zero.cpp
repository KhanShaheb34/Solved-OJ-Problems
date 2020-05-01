#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(ll cs) {
    ll x, y, a, b, ans = 0;
    cin >> x >> y >> a >> b;
    if(b > 2 * a) {
        ans = (x + y) * a;
    }
    else ans = (min(x, y) * b) + ((max(x, y) - min(x, y)) * a);
    cout << ans << endl;
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
