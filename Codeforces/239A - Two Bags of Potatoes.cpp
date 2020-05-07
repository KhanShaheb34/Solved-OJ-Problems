#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
  ll y, n, k;
  cin >> y >> k >> n;

  if (((y / k) + 1)*k > n) cout << "-1" << endl;

  for (ll i = ((y / k) + 1) * k; i <= n; i += k) cout << i - y << " ";

  cout << endl;
}

int main() {
  FastIO; solve();
  return 0;
}
