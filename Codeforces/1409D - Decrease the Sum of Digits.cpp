#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int getSum(string num) {
    int sum = 0;
    for (int i = 0; i < num.length(); i++) sum += num[i] - '0';
    return sum;
}

int main() {
    FastIO;
    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++) {
        int s;
        string ns;
        cin >> ns >> s;
        ll n = stoll(ns);
        for (int i = ns.length() - 1; i >= 0; i--) {
            if (getSum(ns) <= s) {
                ll nn = stoll(ns);
                ll ans = nn - n;
                cout << ans;
                break;
            } else if (ns[i] != '0') {
                ns[i] = '0';
                while (ns[i - 1] == '9') {
                    i--;
                    ns[i] = '0';
                }
                if (i == 0)
                    ns = "0" + ns, i++;
                ns[i - 1] += 1;
            }
        }

        cout << endl;
    }
    return 0;
}
