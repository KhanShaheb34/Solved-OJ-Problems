#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
  string s[4];
  bool yes = false;

  for (int i = 0; i < 4; ++i) cin >> s[i];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; ++j) {
      int c = 0;

      if (s[i][j] == s[i + 1][j]) c++;

      if (s[i][j] == s[i][j + 1]) c++;

      if (s[i][j] == s[i + 1][j + 1]) c++;

      if (c >= 2 || c == 0) yes = true;
    }
  }

  cout << (yes ? "YES" : "NO") << endl;
}

int main() {
  FastIO; solve();
  return 0;
}
