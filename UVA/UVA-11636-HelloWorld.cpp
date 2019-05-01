#include <bits/stdc++.h>
using namespace std;

int main() {
  int i=1;
	float n;
	while(true){
		cin >> n;
		if(n<0) break;
		if(n==0) {
			cout << "Case " << i << ": 0" << endl;
			continue;
		}
		int ans = ceil(log2(n));
		cout << "Case " << i << ": " << ans << endl;
		i++;
	}
  return 0;
}
