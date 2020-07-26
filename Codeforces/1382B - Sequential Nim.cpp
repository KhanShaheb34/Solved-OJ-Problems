#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(ll cs) {
    int n, x, oc = 0;
    bool od = false, first = true;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> x;

        if (!od && x == 1) oc++;

        if (x != 1) od = true;
    }

    if (oc == n && oc % 2 == 0) first = false;
    else if (oc != n && oc % 2 == 1) first = false;

    cout << (first ? "First" : "Second") << endl;
}

int main() {
    FastIO; ll t; cin >> t; for (ll i = 0; i < t; i++) solve(i + 1); return 0;
}
