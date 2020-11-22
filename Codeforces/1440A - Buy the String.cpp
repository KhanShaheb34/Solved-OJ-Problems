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
        int n, c0, c1, h;
        cin >> n >> c0 >> c1 >> h;
        if (c0 - c1 > h)
            c0 = c1 + h;
        else if (c1 - c0 > h)
            c1 = c0 + h;
        string s;
        cin >> s;
        int ans = 0;
        for (auto c : s) {
            if (c == '1')
                ans += c1;
            else
                ans += c0;
        }

        cout << ans << endl;
    }
    return 0;
}
