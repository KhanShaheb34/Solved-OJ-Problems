#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

string solve() {
    int n, ex = 0; string s; cin >> n >> s;

    if(n % 3) return "NO";

    int t = 0, m = 0;
    for (int i = 0; i < n; ++i) {
        if(s[i] == 'T') t++;
        else {
            m++;
            if(m > t) return "NO";
        }
    }

    t = 0, m = 0;
    for (int i = n-1; i >= 0; --i) {
        if(s[i] == 'T') t++;
        else {
            m++;
            if(m > t) return "NO";
        }
    }

    if(m * 2 != t) return "NO";
    return "YES";
}

int main() {
    FastIO;
    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++) {
        cout << solve() << endl;
    }
    return 0;
}
