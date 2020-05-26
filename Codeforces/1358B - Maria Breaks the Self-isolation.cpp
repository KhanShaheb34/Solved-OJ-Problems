#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(ll cs) {
  int n, x;
  cin >> n;
  vector<int> sm(200009, 0);
  vector<int> a;

  for (int i = 0; i < n; i++) {
    cin >> x;
    a.push_back(x);
  }

  sort(a.begin(), a.end());
  int ans = 0;

  for (int i = 0; i < n; i++) {
    if (i + 1 >= a[i]) {
      ans = i + 1;
    }
  }

  cout << ans + 1 << endl;
}

int main() {
  FastIO; ll t; cin >> t; for (ll i = 0; i < t; i++) solve(i + 1);
  return 0;
}
