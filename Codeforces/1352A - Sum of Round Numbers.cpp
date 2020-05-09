#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(ll cs) {
  int n, i = 1;
  cin >> n;
  vector<int> ans;

  while (n) {
    if ((n % 10) * i)
      ans.push_back((n % 10) * i);

    n /= 10;
    i *= 10;
  }

  cout << ans.size() << endl;

  for (auto a : ans) cout << a << " ";

  cout << endl;
}

int main() {
  FastIO; ll t; cin >> t; for (ll i = 0; i < t; i++) solve(i + 1);
  return 0;
}
