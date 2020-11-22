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
        string s;
        cin >> s;
        int b1 = 0, b2 = 0, ans = 0;
        for (auto brck : s) {
            if (brck == '(')
                b1++;
            else if (brck == '[')
                b2++;
            else if (brck == ')' && b1) {
                b1--;
                ans++;
            } else if (brck == ']' && b2) {
                b2--;
                ans++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
