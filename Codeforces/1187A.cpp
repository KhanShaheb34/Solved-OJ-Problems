#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T, n, s, t;
	cin >> T;
	while(T--) {
		cin >> n >> s >> t;
		cout << n - min(s,t) + 1 << endl;
	}
	return 0;
}
