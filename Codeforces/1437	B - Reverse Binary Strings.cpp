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
        int n, ans = 0;
        string s;
        cin >> n >> s;
        for (int i = 1; i < n; i++) {
            ans += (s[i] == s[i - 1] ? 1 : 0);
        }
        cout << (ans + 1) / 2 << endl;
    }
    return 0;
}
