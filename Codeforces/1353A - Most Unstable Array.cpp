#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(ll cs) {
  ll n, m;
  cin >> n >> m;
  ll ans = 0;

  if (n == 2) ans = m;
  else if (n > 2) ans = m * 2;

  cout << ans << endl;
}

int main() {
  FastIO; ll t; cin >> t; for (ll i = 0; i < t; i++) solve(i + 1);
  return 0;
}
