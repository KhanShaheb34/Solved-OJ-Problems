#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(ll cs) {
    int x, y, z;
    cin >> x >> y >> z;

    if ((x == y && x > z) || (x == z && x > y) || (y == z && y > x) || (x == y && y == z))
        cout << "YES\n" << min(min(x, y), z) << " " << min(min(x, y), z) << " " << max(max(x, y), z) << endl;
    else
        cout << "NO\n";
}

int main() {
    FastIO; ll t; cin >> t; for (ll i = 0; i < t; i++) solve(i + 1); return 0;
}
