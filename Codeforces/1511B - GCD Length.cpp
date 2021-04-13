#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << 1;
    for (int i = 0; i < a-1; ++i) cout << 0;
    cout << " 1";
	for (int i = 0; i < b-c; ++i) cout << 1;
	for (int i = 0; i < c-1; ++i) cout << 0;
	cout << endl;
}

int main() {
    FastIO;
    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++) {
        solve();
    }
    return 0;
}
