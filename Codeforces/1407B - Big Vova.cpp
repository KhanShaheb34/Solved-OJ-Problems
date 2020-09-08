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
        vector<int> a(n), b;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end(), greater<int>());
        b.push_back(a[0]);
        cout << a[0] << " ";
        a.erase(a.begin() + 0);
        int total_gcd = b[0];

        for (int i = 1; i < n; i++) {
            int maxgcd = -1, ind = 0;

            for (int j = 0; j < a.size(); j++) {
                int gcd = __gcd(total_gcd, a[j]);

                if (gcd > maxgcd) {
                    maxgcd = gcd;
                    ind = j;
                }
            }

            cout << a[ind] << " ";
            b.push_back(a[ind]);
            a.erase(a.begin() + ind);
            total_gcd = maxgcd;
        }

        cout << endl;
    }
    return 0;
}
