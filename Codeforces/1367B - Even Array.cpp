#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
void solve(ll cs) {
  int n, a, e = 0, o = 0;
  cin >> n;
 
  for (int i = 0; i < n; i++) {
    cin >> a;
 
    if (i % 2 && !(a % 2)) e++;
 
    if (!(i % 2) && a % 2) o++;
  }
 
  if (e == o) cout << e << endl;
  else cout << -1 << endl;
}
 
int main() {
  FastIO; ll t; cin >> t; for (ll i = 0; i < t; i++) solve(i + 1); return 0;
}
