#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
void solve(ll cs) {
  int n, k;
  string table;
  vector<int> free;
  int counter = 0, ans = 0;
  cin >> n >> k >> table;
  string temp(k, '0');
  table = temp + table + temp;
 
  for (auto ch : table) {
    if (ch == '1') free.push_back(counter), counter = 0;
    else ++counter;
  }
 
  free.push_back(counter);
  sort(free.begin(), free.end(), greater<int>());
 
  for (auto f : free) {
    if (f < (2 * k + 1)) break;
 
    ans += (f - k) / (k + 1);
  }
 
  cout << ans << endl;
}
 
int main() {
  FastIO; ll t; cin >> t; for (ll i = 0; i < t; i++) solve(i + 1); return 0;
}
