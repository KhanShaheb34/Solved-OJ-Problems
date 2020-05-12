#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
  int a, b, n;
  cin >> a >> b >> n;
  a *= 10;

  for (int i = 0; i < 10; i++) {
    if ((a + i) % b == 0) {
      a += i;
      break;
    }

    if (i == 9) a = -1;
  }

  if (a == -1)
    cout << "-1" << endl;
  else {
    string ans = to_string(a);

    while (--n) ans += '0';

    cout << ans << endl;
  }
}

int main() {
  FastIO; solve();
  return 0;
}
