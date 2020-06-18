#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
  ll k;
  cin >> k;
  vector<ll> divs;
  vector<ll> rep(10, 1);
  string src = "codeforces";
  ll mult = 0, i = 0;

  for (ll i = 0;; i++) {
    mult = 1;

    for (auto r : rep) mult *= r;

    if (mult >= k) break;

    rep[i % 10]++;
  }

  for (ll i = 0; i < 10; i++) {
    for (ll j = 0; j < rep[i]; j++) {
      cout << src[i];
    }
  }

  cout << endl;
}

int main() {
  FastIO; solve(); return 0;
}
