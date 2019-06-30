#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int a, b, ans = 1;
  cin >> a >> b;
  a = min(a, b);
  while(a>0) ans*=a--;
  cout << ans << endl;
}
