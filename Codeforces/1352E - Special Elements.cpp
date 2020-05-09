#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(ll cs) {
  int n, s;
  cin >> n;
  int a[n], sum[n + 1] = {0};
  vector<int> am(n + 1, 0);
  vector<bool> ck(n + 1, false);
  int ans = 0;

  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    am[a[i]]++;
    sum[i + 1] = sum[i] + a[i];
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < i; j++) {
      s = sum[i + 1] - sum[j];

      if (s <= n && !ck[s]) {
        ans += am[s];
        ck[s] = true;
      }
    }
  }

  cout << ans << endl;
}

int main() {
  FastIO; ll t; cin >> t; for (ll i = 0; i < t; i++) solve(i + 1);
  return 0;
}
