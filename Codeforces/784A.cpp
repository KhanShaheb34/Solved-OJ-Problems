#include<bits/stdc++.h>
using namespace std;
 
int main() {
  bool a, b, c, d;
  cin >> a >> b >> c >> d;
  if((!a && !b && d) || (a && b && !d) || (a && !b && !c) || (a && c && d)) cout << "1" <<endl;
  else cout << "0" <<endl;
}
