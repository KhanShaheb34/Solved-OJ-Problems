#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(ll cs) {
  ll n, ans = 0;
  cin >> n;

  for (ll i = 1, mul = 8; i <= n / 2; ++i, mul += 8) ans += mul * i;

  cout << ans << endl;
}

int main() {
  FastIO; ll t; cin >> t; for (ll i = 0; i < t; i++) solve(i + 1);
  return 0;
}
