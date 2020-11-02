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
        int a, b, z = 0, ans = 0;
        bool one = false;
        string s;
        cin >> a >> b >> s;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '1') {
                one = true;
                if (z && b * z <= a) {
                    ans += b * z;
                    for (int j = i - z; j < i; j++)
                        s[j] = '1';
                }
                z = 0;
            } else {
                if (one) z++;
            }
        }

        one = false;
        s += '0';

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '1') {
                one = true;
            } else if (one) {
                ans += a;
                one = false;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
