#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
  int x, y;
  cin >> x >> y;
  int x1 = 0, y1 = abs(x) + abs(y), x2 = abs(x) + abs(y), y2 = 0;

  if (y < 0) y1 *= -1;

  if (x < 0) x2 *= -1, swap(x2, x1), swap(y2, y1);

  cout << x1 << " " << y1 << " " << x2 << " " << y2 << endl;
}

int main() {
  FastIO; solve();
  return 0;
}
