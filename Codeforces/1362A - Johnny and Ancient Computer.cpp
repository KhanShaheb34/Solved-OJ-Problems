#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(ll cs) {
  ull n;
  cin >> n;
  ull ans = 0, temp = 2;

  if (n % 2) ans += (n / 2) + 1;
  else ans += (n / 2);

  ull step = 2;

  for (ull i = 2; i <= n; i *= 2) {
    ans += step;
    step++;
  }

  for (ull i = 4; i <= n; i *= 2) {
    ans += (((n - (i / 2)) / (i)) * temp);
    temp++;
  }

  cout << ans << endl;
}

int main() {
  FastIO; ll t; cin >> t; for (ll i = 0; i < t; i++) solve(i + 1); return 0;
}
