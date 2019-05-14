#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int ans = abs(n) * (abs(n) + 1) / 2;
  if(n < 0) {
    ans--;
    ans *= -1;
  } else if (n == 0) {
    ans = 1;
  }
  cout << ans;
  return 0;
}
