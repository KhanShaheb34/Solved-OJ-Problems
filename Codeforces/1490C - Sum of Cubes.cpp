#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<long long> cubes;

	for(long long i=1; i<=10000; i++)
		cubes.push_back(i*i*i);

	int t;
	cin >> t;
	while(t--) {
		long long x;
		cin >> x;

		bool yes = false;

		for(auto cube:cubes) {
			if(cube > x) break;
			double rt = cbrt((double)x - (double)cube);
			if((int) rt == rt && rt != 0) yes = true;
		}

		cout << (yes ? "YES": "NO") << endl;
	}
	return 0;
}
