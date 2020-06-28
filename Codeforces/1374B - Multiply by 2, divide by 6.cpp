#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(ll cs) {
  ll n, score = 0;
  cin >> n;

  while (n % 6 == 0) score++, n /= 6;

  while (n % 3 == 0) score += 2, n /= 3;

  cout << (n == 1 ? score : -1) << endl;
}

int main() {
  FastIO; ll t; cin >> t; for (ll i = 0; i < t; i++) solve(i + 1); return 0;
}
