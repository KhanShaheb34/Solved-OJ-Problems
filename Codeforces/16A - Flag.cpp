#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
  int n, m;
  string s;
  bool yes = true;
  vector<string> vs;
  cin >> n >> m;

  for (int i = 0; i < n; ++i) {
    cin >> s;
    set<char> c;

    for (auto ss : s) c.insert(ss);

    if ((i > 0 && s[0] == vs[i - 1][0]) || c.size() > 1) yes = false;

    vs.push_back(s);
  }

  cout << (yes ? "YES" : "NO") << endl;
}

int main() {
  FastIO; solve();
  return 0;
}
