#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(ll cs) {
  int n, x;
  cin >> n;
  vector<int> eve, odd;

  for (int i = 0; i < n; ++i) {
    cin >> x;
    x % 2 ? odd.push_back(i + 1) : eve.push_back(i + 1);
  }

  if (eve.empty()) {
    if (odd.size() > 1) cout << 2 << endl << odd[0] << " " << odd[1] << endl;
    else cout << -1 << endl;
  } else {
    cout << 1 << endl << eve[0] << endl;
  }
}

int main() {
  FastIO; ll t; cin >> t; for (ll i = 0; i < t; i++) solve(i + 1);
  return 0;
}
