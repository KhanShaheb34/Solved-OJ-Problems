#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(ll cs) {
  int n, m, x;
  cin >> n >> m;
  vector<bool> rows(n, false), cols(m, false);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> x;

      if (x) {
        rows[i] = true;
        cols[j] = true;
      }
    }
  }

  int rc = 0, cc = 0;

  for (auto r : rows) if (!r) rc++;

  for (auto c : cols) if (!c) cc++;

  int moves = min(rc, cc);

  if (moves % 2) cout << "Ashish" << endl;
  else cout << "Vivek" << endl;
}

int main() {
  FastIO; ll t; cin >> t; for (ll i = 0; i < t; i++) solve(i + 1); return 0;
}
