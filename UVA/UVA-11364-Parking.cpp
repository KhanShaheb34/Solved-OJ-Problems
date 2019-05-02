#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
	cin >> t;
	while (t--) {
    int n, s = 100, b = -1, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> x;
      if(s > x) s=x;
      if(b < x) b=x;
    }
    cout << (b-s)*2 << endl;
	}
}
