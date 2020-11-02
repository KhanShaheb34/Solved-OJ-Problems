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
        int n;
        cin >> n;
        int num = 4 * n;
        for (int i = 0; i < n; i++)
            cout << 4 * n - i * 2 << " ";
        cout << endl;
    }
    return 0;
}
