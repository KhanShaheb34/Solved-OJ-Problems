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
        int diff = abs(a - b);
        cout << (int)ceil(diff / 10.0) << endl;
    }
    return 0;
}
