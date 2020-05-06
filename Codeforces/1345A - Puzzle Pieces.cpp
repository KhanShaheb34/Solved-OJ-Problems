#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
void solve(ll cs) {
  int n, m;
  cin >> n >> m;
  cout << (min(n, m) > 1 && max(n, m) > 2  ? "NO" : "YES") << endl;
}
 
int main() {
  FastIO; ll t; cin >> t; for (ll i = 0; i < t; i++) solve(i + 1);
  return 0;
}
