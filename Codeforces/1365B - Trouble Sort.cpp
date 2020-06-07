#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(ll cs) {
  int n, x, prev = 0;
  cin >> n;
  bool incr = true;
  set<int> tps;

  for (int i = 0; i < n; ++i) {
    cin >> x;

    if (prev > x) incr = false;

    prev = x;
  }

  for (int i = 0; i < n; ++i) {
    cin >> x;
    tps.insert(x);
  }

  if (tps.size() == 1 && !incr) cout << "No" << endl;
  else cout << "Yes" << endl;
}

int main() {
  FastIO; ll t; cin >> t; for (ll i = 0; i < t; i++) solve(i + 1); return 0;
}
