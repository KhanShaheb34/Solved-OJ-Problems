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
        int n, z = 0, o = 0, x;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> x;
            x == 0 ? z++ : o++;
        }
        if (z >= o) {
            cout << z << endl;
            for (int i = 0; i < z; i++)
                cout << 0 << " ";
        } else if (z < o) {
            if (o % 2 == 1) o--;
            cout << o << endl;
            for (int i = 0; i < o; i++)
                cout << 1 << " ";
        }
        cout << endl;
    }
    return 0;
}
