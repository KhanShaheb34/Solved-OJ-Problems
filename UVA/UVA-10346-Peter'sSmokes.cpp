#include <bits/stdc++.h>
using namespace std;

int countCigar(int n, int k) {
  if(n < k)
    return n;
  return ((n/k)*k) + countCigar((n/k+n%k), k);

}

int main() {
	int n, k, ans, m=0;
  while (scanf("%d%d", &n, &k)!=EOF) {
    ans = countCigar(n, k);
    cout << ans << endl;
  }
	return 0;
}
