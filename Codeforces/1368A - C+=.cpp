#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(ll cs) {
  ll a, b, n, ans = 0;
  cin >> a >> b >> n;

  if (b > a) swap(a, b);

  while (a <= n) {
    b += a;
    swap(a, b);
    ans++;
  }

  cout << ans << endl;
}

int main() {
  FastIO; ll t; cin >> t; for (ll i = 0; i < t; i++) solve(i + 1); return 0;
}
