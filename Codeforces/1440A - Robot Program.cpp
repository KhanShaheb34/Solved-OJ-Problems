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
        int x, y;
        cin >> x >> y;
        int ans;
        if (x == y)
            ans = x + y;
        else
            ans = min(x, y) * 2 + 1 + (max(x, y) - min(x, y) - 1) * 2;
        cout << ans << endl;
    }
    return 0;
}
