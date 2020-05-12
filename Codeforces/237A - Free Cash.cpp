#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
  int n, h, m, cash = 0;
  cin >> n;
  map<int, int> tm;

  for (int i = 0; i < n; ++i) {
    cin >> h >> m;
    tm[h * 60 + m]++;
    cash = max(tm[h * 60 + m], cash);
  }

  cout << cash << endl;
}

int main() {
  FastIO; solve();
  return 0;
}
