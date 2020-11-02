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
        ll n, walk = 0;
        cin >> n;
        vector<ll> a(n), b(n);
        vector<pair<ll, ll> > p;
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        for (ll i = 0; i < n; i++) {
            cin >> b[i];
            p.push_back({a[i], b[i]});
            walk += b[i];
        }
        sort(p.begin(), p.end());

        if (n == 1) {
            cout << min(p[0].first, p[0].second) << endl;
            continue;
        }

        ll ans = p[n - 1].first, w = 0;

        for (int i = n - 2; i >= 0; i--) {
            w += p[i + 1].second;
            ans = min(ans, max(w, p[i].first));
        }

        cout << min(walk, ans) << endl;
    }
    return 0;
}
