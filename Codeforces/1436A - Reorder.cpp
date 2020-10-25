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
        int n, m, x, sum = 0;
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            cin >> x;
            sum += x;
        }
 
        cout << (sum == m ? "YES" : "NO") << endl;
    }
    return 0;
}
