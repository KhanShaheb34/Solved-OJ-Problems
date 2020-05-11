#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
  string x, maxb = "";
  cin >> x;

  for (int i = 0; i < x.length(); i++) {
    if (x[i] == '0' || x[i] == '1') maxb += x[i];
    else {
      for (int j = i; j < x.length(); j++) {
        maxb += '1';
      }

      break;
    }
  }

  int ans = 0, pow = 1;

  for (int i = maxb.length() - 1; i >= 0; i--) {
    ans += (maxb[i] - '0') * pow;
    pow *= 2;
  }

  cout << ans << endl;
}

int main() {
  FastIO; solve();
  return 0;
}
