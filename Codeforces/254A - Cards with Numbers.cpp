#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
void solve() {
  int n, x;
  cin >> n;
  vector<int> a(5009, 0);
  vector<pair<int, int> > ans;
 
  for (int i = 0; i < 2 * n; ++i) {
    cin >> x;
 
    if (a[x]) {
      ans.push_back({a[x], i + 1});
      a[x] = 0;
    } else
      a[x] = i + 1;
  }
 
  if (ans.size() < n) cout << -1 << endl;
  else {
    for (auto an : ans) {
      cout << an.first << " " << an.second << endl;
    }
  }
}
 
int main() {
  FastIO;
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  solve();
  return 0;
}
