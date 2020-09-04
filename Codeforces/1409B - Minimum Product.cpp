#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int main() {
    FastIO;
    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++) {
        ll a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;

        ll nb = max(b - n, y);
        ll nn = n - (b - nb);
        ll na = max(a - nn, x);
        ll nab = na * nb;

        ll ma = max(a - n, x);
        ll mn = n - (a - ma);
        ll mb = max(b - mn, y);
        ll mab = ma * mb;

        cout << min(mab, nab) << endl;
    }
    return 0;
}
