#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
set<ll> cards;
 
void solve(ll cs) {
  ll n, ans = 0;
  cin >> n;
 
  while (n) {
    auto it = cards.upper_bound(n);
    it--;
 
    if (*it == 0) break;
 
    n -= (*it);
    ans++;
  }
 
  cout << ans << endl;
}
 
int main() {
  FastIO; ll t;
 
  for (ll h = 0; h < 30000; h++) {
    cards.insert((3 * h * h + h) / 2);
  }
 
  cin >> t; for (ll i = 0; i < t; i++) solve(i + 1);
  return 0;
}
