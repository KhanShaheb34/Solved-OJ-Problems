#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
void solve(ll cs) {
  ll n, k;
  cin >> n >> k;
 
  if (n - k + 1 > 0 && (n - k + 1) % 2) {
    cout << "YES" << endl;
 
    for (int i = 0; i < k - 1; i++) {
      cout << "1 ";
    }
 
    cout << n - k + 1 << endl;
  }
  else if (n - 2 * (k - 1) > 0 && ((n - 2 * (k - 1)) % 2) == 0) {
    cout << "YES" << endl;
 
    for (int i = 0; i < k - 1; i++) {
      cout << "2 ";
    }
 
    cout << n - 2 * (k - 1) << endl;
  }
  else cout << "NO" << endl;
}
 
int main() {
  FastIO; ll t; cin >> t; for (ll i = 0; i < t; i++) solve(i + 1);
  return 0;
}
