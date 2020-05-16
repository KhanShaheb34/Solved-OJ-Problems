#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(ll cs) {
  ll a, k;
  cin >> a >> k;

  for (ll i = 1; i < k; i++) {
    string as = to_string(a);
    int mxd = 0, mnd = 10;

    for (auto ax : as) {
      mxd = max((int)(ax - '0'), mxd);
      mnd = min((int)(ax - '0'), mnd);
    }

    if (!mnd) break;

    a += mnd * mxd;
  }

  cout << a << endl;
}

int main() {
  FastIO; ll t; cin >> t; for (ll i = 0; i < t; i++) solve(i + 1);
  return 0;
}
