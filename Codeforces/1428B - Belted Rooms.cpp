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
        int n, groomCount = 0, cw = 0, acw = 0;
        string s;

        cin >> n >> s;

        vector<bool> groom(n, false);

        for (int i = 0; i < n; i++) {
            if (s[i] == '-') {
                groom[i] = true;
                groom[(i + 1) % n] = true;
                cw++;
                acw++;
            } else if (s[i] == '<')
                acw++;
            else if (s[i] == '>')
                cw++;
        }

        for (auto gr : groom)
            if (gr) groomCount++;

        if (cw == n || acw == n)
            cout << n << endl;
        else
            cout << groomCount << endl;
    }
    return 0;
}
