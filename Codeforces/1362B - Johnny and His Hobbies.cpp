#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(ll cs) {
  int n, ans = -1;
  cin >> n;
  vector<bool> sb(4096, false);
  vector<int> s(n);

  for (int i = 0; i < n; i++) {
    cin >> s[i];
    sb[s[i]] = true;
  }

  for (int j = 1; j <= 2048; ++j) {
    int c = 0;

    for (auto x : s) {
      if (sb[x ^ j]) c++;
      else break;
    }

    if (c == n) {
      ans = j;
      break;
    }
  }

  cout << ans << endl;
}

int main() {
  FastIO; ll t; cin >> t; for (ll i = 0; i < t; i++) solve(i + 1); return 0;
}
