#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
  int n, count[128] = {0};
  cin >> n;
  string s;
  for(int i=0; i<n; i++) {
      cin >> s;
      for(auto c:s)
        count[c]++;
  }
  bool yes = true;
  for(auto c:count)
    if(c%n != 0) yes = false;

  cout << (yes?"YES":"NO") << endl;
  
}

int main() {
  FastIO; int t; cin >> t; while(t--) solve();
  return 0;
}
