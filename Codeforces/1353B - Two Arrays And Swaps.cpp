#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(ll cs) {
  int n, k, x;
  vector<int> a, b;
  cin >> n >> k;

  for (int i = 0; i < n; ++i) {
    cin >> x;
    a.push_back(x);
  }

  for (int i = 0; i < n; ++i) {
    cin >> x;
    b.push_back(x);
  }

  sort(a.begin(), a.end());
  sort (b.begin(), b.end(), greater<int>());
  int ans = 0;

  for (int i = 0; i < n; i++) {
    i < k && b[i] > a[i] ? ans += b[i] : ans += a[i];
  }

  cout << ans << endl;
}

int main() {
  FastIO; ll t; cin >> t; for (ll i = 0; i < t; i++) solve(i + 1);
  return 0;
}
