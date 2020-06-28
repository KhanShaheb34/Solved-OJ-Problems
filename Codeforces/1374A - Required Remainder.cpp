#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(ll cs) {
  int x, y, n;
  cin >> x >> y >> n;

  if ((n % x) >= y)
    cout << n - (n % x) + y << endl;
  else
    cout << n - (n % x) - (x - y) << endl;
}

int main() {
  FastIO; ll t; cin >> t; for (ll i = 0; i < t; i++) solve(i + 1); return 0;
}
