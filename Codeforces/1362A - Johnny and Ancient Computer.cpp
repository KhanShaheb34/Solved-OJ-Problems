#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(ll cs) {
  ll a, b, s = 0;
  cin >> a >> b;

  if (b > a) {
    while (b > a) {
      if (a == b) break;
      else if (a << 3 <= b) a <<= 3;
      else if (a << 2 <= b) a <<= 2;
      else if (a << 1 <= b) a <<= 1;
      else {
        s = -1;
        break;
      }

      s++;
    }
  } else {
    while (b < a) {
      if (a == b) break;
      else if (a % 8 == 0 && a >> 3 >= b) a >>= 3;
      else if (a % 4 == 0 && a >> 2 >= b) a >>= 2;
      else if (a % 2 == 0 && a >> 1 >= b) a >>= 1;
      else {
        s = -1;
        break;
      }

      s++;
    }
  }

  cout << s << endl;
}

int main() {
  FastIO; ll t; cin >> t; for (ll i = 0; i < t; i++) solve(i + 1); return 0;
}
