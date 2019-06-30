#include<bits/stdc++.h>
using namespace std;
 
int main() {
  long long s, x, ans = 1;
  cin >> s >> x;
  long long a = (s-x)/2;
  if((s-x)%2 || (a & x)) {
    cout << "0" << endl;
    return 0;
  }
  while (x)
  {
    if(x%2) ans*=2;
    x/=2; 
  }
  if(a==0) ans-=2;
  
  cout << ans << endl;
  return 0;
}
