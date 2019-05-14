#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, ans = 0, mult = 1, i;
  cin >> n;
  if (n == 0) {
    ans = 10;
  } else if(n == 1) {
    ans = 1;
  }
  while(n>1){
    for(i=9; i>=2; i--) {
      if(n%i==0) {
        ans += i * mult;
        mult *= 10;
        n /= i;
        break;
      }
    }
    if(i==1) {
      ans = -1;
      break;
    }
  }
  cout << ans;
  return 0;
}
