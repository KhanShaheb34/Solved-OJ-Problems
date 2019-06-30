#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a[101] = {0};
  cin >> n;
  for(int i=0; i<n; i++) cin >> a[i];
  sort(a, a+n);
  for(int i=0; i<n; i+=2) cout << a[i] << " ";
  int p = n-1;
  if(n%2) p--;
  for(int i=p; i>0; i-=2) cout << a[i] << " ";
  cout<<endl;
  return 0;
}
