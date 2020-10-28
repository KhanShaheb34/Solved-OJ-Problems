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
        int a, b;
        cin >> a >> b;
        cout << "Case " << i + 1 << ": " << ((b + 1) / 2) * ((b + 1) / 2) - (a / 2) * (a / 2) << endl;
    }
    return 0;
}
