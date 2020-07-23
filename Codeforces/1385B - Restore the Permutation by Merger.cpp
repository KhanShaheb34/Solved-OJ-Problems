#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, x;
		cin >> n;
		vector<bool> d(n, false);
		vector<int> ans;
		for (int i = 0; i < 2 * n; ++i) {
			cin >> x;
			if(!d[x]) ans.push_back(x), d[x] = true;
		}

		for(int a:ans) cout << a << " ";
		cout << endl;
	}
}
