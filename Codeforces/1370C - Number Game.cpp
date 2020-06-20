#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(ll cs) {
  ll n;
  string win;
  cin >> n;

  if (n == 1) win = "FastestFinger";
  else if (n == 2 || n % 2) win = "Ashishgup";
  else {
    bool yes = false;
    int ods = 0, evs = 0, k = n;

    while (k % 2 == 0) {
      evs++;
      k /= 2;
    }

    for (ll i = 3; i * i <= k; i += 2) {
      while (k % i == 0) {
        k /= i;
        ods++;
      }
    }

    if (k > 1) ods++;

    if ((ods == 0 && evs > 1) || (ods == 1 && evs == 1))
      win = "FastestFinger";
    else win = "Ashishgup";
  }

  cout << win << endl;
}

int main() {
  FastIO; ll t; cin >> t; for (ll i = 0; i < t; i++) solve(i + 1); return 0;
}
