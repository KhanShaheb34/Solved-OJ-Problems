#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(ll cs) {
  ll n, ai;
  cin >> n;
  vector<ll> a;

  for (int i = 0; i < n; ++i) {
    cin >> ai;
    a.push_back(ai);
  }

  ll alice = 0, bob = 0, apos = -1, bpos = a.size() - 1, mv = 0, prev = 0;

  while (apos < bpos) {
    ll cur = 0;

    while (prev >= cur && apos < bpos) cur += a[++apos];

    if (cur)mv++;

    alice += cur;
    prev = cur;
    cur = 0;

    while (prev >= cur && apos < bpos) cur += a[bpos--];

    if (cur) mv++;

    bob += cur;
    prev = cur;
  }

  cout << mv << " " << alice << " " << bob << endl;
}

int main() {
  FastIO; ll t; cin >> t; for (ll i = 0; i < t; i++) solve(i + 1);
  return 0;
}
