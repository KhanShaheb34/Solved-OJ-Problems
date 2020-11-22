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
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n * k);
        for (ll i = n * k - 1; i >= 0; i--) cin >> a[i];
        ll sum = 0, step = n - ((n + 1) / 2) + 1;
        for (ll i = 1; i <= k; i++) {
            ll num = a[i * step - 1];
            sum += num;
        }

        cout << sum << endl;
    }
    return 0;
}
