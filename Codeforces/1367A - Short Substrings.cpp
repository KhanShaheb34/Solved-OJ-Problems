#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
void solve(ll cs) {
  string a = "", b;
  cin >> b;
  a += b[0];
  a += b[1];
 
  for (int i = 3; i < b.length(); i += 2) {
    a += b[i];
  }
 
  cout << a << endl;
}
 
int main() {
  FastIO; ll t; cin >> t; for (ll i = 0; i < t; i++) solve(i + 1); return 0;
}
