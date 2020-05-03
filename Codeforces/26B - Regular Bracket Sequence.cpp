#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
void solve() {
  string bs;
  cin >> bs;
  int point = 0, ans = 0;
 
  for (auto b : bs) {
    if (b == '(') point++;
    else if (point) ans += 2, point--;
  }
 
  cout << ans << endl;
}
 
int main() {
  FastIO; solve();
  return 0;
}
