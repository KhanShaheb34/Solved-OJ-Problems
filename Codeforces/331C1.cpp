#include<bits/stdc++.h>
using namespace std;
 
int main() {
  long long n, ans=0;
  cin >> n;
  while (n>0)
  {
    int maxDig=0;
    for(long long i=n; i>0; i/=10) {
      if(i%10 > maxDig) maxDig=i%10;
    }
    n-=maxDig;
    ans++;
  }
  cout << ans << endl;
  return 0;
}
