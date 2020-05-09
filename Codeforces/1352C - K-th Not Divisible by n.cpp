#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(ll cs) {
  ll n, k;
  cin >> n >> k;
  ll ans = k;

  while (k > n) {
    ans += k / n;
    k = (k / n) + (k % n);
  }

  if (ans % n == 0) ans++;

  cout << ans << endl;
}

int main() {
  FastIO; ll t; cin >> t; for (ll i = 0; i < t; i++) solve(i + 1);
  return 0;
}
