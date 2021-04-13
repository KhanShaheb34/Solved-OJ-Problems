#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void solve() {
    int n,x,ans=0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        if(x==1 || x==3) ans++;
    }

    cout << ans << endl;
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
