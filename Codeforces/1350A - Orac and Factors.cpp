#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

ll smallest_div(ll n) {
  if (n % 2 == 0) return 2;

  for (ll i = 3; (i * i) <= n; i += 2) if (n % i == 0) return i;

  return n;
}

void solve(ll cs) {
  ll n, k;
  cin >> n >> k;
  ll sd = smallest_div(n);
  cout << n + sd + (k - 1) * 2 << endl;
}

int main() {
  FastIO; ll t; cin >> t; for (ll i = 0; i < t; i++) solve(i + 1);
  return 0;
}
