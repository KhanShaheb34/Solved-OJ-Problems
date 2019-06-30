#include <bits/stdc++.h>
using namespace std;

int main() {
  long long r, l;
  cin >> r >> l;
  cout << "YES" << endl;
  for(long long i=r, k=0; i<=l; i++, k++) {
    cout << i;
    k&&(k%2)?cout << "\n":cout << " ";
  }
  return 0;
}
