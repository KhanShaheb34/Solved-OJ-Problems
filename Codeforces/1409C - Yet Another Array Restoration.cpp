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
        int n, x, y;
        cin >> n >> x >> y;
        int diff = y - x;
        int div = n - 1;
        while (diff % div != 0) div--;
        int incr = diff / div;
        for (int i = x; i <= y; i += incr) {
            cout << i << " ";
            n--;
        }
        while (n > 0) {
            x -= incr;
            if (x <= 0) break;
            cout << x << " ";
            n--;
        }
        while (n > 0) {
            y += incr;
            cout << y << " ";
            n--;
        }
        cout << endl;
    }
    return 0;
}
