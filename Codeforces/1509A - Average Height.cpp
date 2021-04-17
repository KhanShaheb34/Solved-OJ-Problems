#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    int n, x; cin >> n;
    vector<int> even;
    while(n--) {
        cin >> x;
        if(x % 2) cout << x << " ";
        else even.push_back(x);
    }

    for(auto num:even) cout << num << " ";
    cout << endl;
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
