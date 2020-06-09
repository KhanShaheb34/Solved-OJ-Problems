#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

ll convert(int x) {
  string ls = "";
  for (; x > 0; x /= 3) ls += (x % 3 == 0 ? '0' : (x % 3 == 1 ? '4' : '7'));
  for (auto c : ls) if (c == '0') return -1;
  reverse(ls.begin(), ls.end());
  return stoll(ls);
}

void solve() {
  ll l, r;
  cin >> l >> r;
  vector<ll> lnums;
  lnums.push_back(0);

  for (ll i = 1, ln = convert(i); ln < 10e9; ln = convert(++i))
    if (ln != -1)
      lnums.push_back(ln);

  ll lbl = lower_bound(lnums.begin(), lnums.end(), l) - lnums.begin();
  ll lbr = lower_bound(lnums.begin(), lnums.end(), r) - lnums.begin();
  ll sum = 0;

  if (lbl == lbr) sum = (r - l + 1) * lnums[lbl];
  else
    for (ll i = lbl; i <= lbr; ++i)
      if (i == lbl)
        sum += (lnums[lbl] - l + 1) * lnums[lbl];
      else if (i == lbr)
        sum += (r - lnums[lbr - 1]) * lnums[lbr];
      else
        sum += (lnums[i] - lnums[i - 1]) * lnums[i];

  cout << sum << endl;
}

int main() {
  FastIO; solve(); return 0;
}
