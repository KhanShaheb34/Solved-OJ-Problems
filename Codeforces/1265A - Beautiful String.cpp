#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(ll cs) {
  string s;
  cin >> s;
  bool yes = true;
  int n = s.length();

  if (s[0] == '?') s[1] == 'a' ? s[0] = 'b' : s[0] = 'a';

  if (s[n - 1] == '?') s[n - 2] == 'a' ? s[n - 1] = 'b' : s[n - 1] = 'a';

  for (int i = 1; i < n; i++) {
    vector<char> alp = {'a', 'b', 'c'};

    if (s[i] == '?') {
      if (s[i + 1] == '?') s[i - 1] == 'a' ? s[i] = 'b' : s[i] = 'a';
      else if (s[i - 1] == s[i + 1]) s[i - 1] == 'a' ? s[i] = 'b' : s[i] = 'a';
      else {
        alp.erase(find(alp.begin(), alp.end(), s[i - 1]));
        alp.erase(find(alp.begin(), alp.end(), s[i + 1]));
        s[i] = alp[0];
      }
    } else if (s[i - 1] == s[i]) {
      yes = false;
      break;
    }
  }

  cout << (yes ? s : "-1") << endl;
}

int main() {
  FastIO; ll t; cin >> t; for (ll i = 0; i < t; i++) solve(i + 1);
  return 0;
}
