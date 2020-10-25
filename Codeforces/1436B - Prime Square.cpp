#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
 
int main() {
    FastIO;
    vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++) {
        int n, sdiv;
        cin >> n;
        for (auto p : primes) {
            if (n % p == 0) {
                sdiv = p;
                break;
            }
        }
 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << (i / sdiv == j / sdiv ? 1 : 0) << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
