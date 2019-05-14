#include <bits/stdc++.h>
using namespace std;

int main() {
  double ans[1000000], num;
  int n = 0;
  cout << setprecision(4) << fixed;
  while(cin >> num) {
    ans[n] = sqrt(num);
    n++;
  }
  for(int i=n-1; i>=0; i--) {
    cout << ans[i] << endl;
  }
  return 0;
}
