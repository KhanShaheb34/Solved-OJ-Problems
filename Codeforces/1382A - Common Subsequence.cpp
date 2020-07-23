#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(ll cs) {
    int n, m, x, ans;
    cin >> n >> m;
    set<int> a;
    bool found = false;

    for (int i = 0; i < n; ++i) {
        cin >> x;
        a.insert(x);
    }

    for (int i = 0; i < m; ++i) {
        cin >> x;

        if (a.find(x) != a.end()) {
            found = true;
            ans = x;
        }
    }

    if (!found) cout << "NO\n";
    else cout << "YES\n" << 1 << " " << ans << endl;
}

int main() {
    FastIO; ll t; cin >> t; for (ll i = 0; i < t; i++) solve(i + 1); return 0;
}
