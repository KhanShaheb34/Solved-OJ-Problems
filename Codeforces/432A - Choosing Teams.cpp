#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
  int n, k, x, ans = 0;
  cin >> n >> k;
  vector<int> y(6);

  for (int i = 0; i < n; i++) {
    cin >> x;
    y[x]++;
  }

  int extra = 0;

  for (int i = 0; i < 6 - k; i++) {
    ans += (y[i] + extra) / 3;
    extra = (y[i] + extra) % 3;
  }

  cout << ans << endl;
}

int main() {
  FastIO; solve(); return 0;
}
