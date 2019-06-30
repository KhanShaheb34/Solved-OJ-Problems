#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, a[1001], b[1001], cookie = 10000, left[1001] = {0}, mag=0;
  cin >> n >> k;
  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < n; i++) {
    cin >> b[i];
    if(cookie > b[i]/a[i]) cookie = b[i]/a[i];
  }
  for (int i = 0; i < n; i++) {
    left[i] = b[i] - cookie * a[i];
  }
  while (k>=mag) {
    mag = 0;
    for (int i = 0; i < n; i++) {
      left[i] -= a[i];
      if(left[i]<0) mag-=left[i];
    }
    if(k>=mag) cookie++;
  }
  cout << cookie << endl;
  return 0;
}
