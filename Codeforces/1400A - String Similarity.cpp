#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
  int n;
  string s, ans = "";
  
  cin >> n >> s;
  for(int i=0; i<2*n; i+=2) ans += s[i];
  cout << ans << endl;
  
}

int main() {
  FastIO; int t; cin >> t; while(t--) solve();
  return 0;
}
