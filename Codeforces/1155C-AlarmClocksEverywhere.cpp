#include <bits/stdc++.h>
using namespace std;

long long calculateGCD(long long a, long long b){
	if(b==0) return a;
	return calculateGCD(b, a%b);
}

int main() {
	int n, m;
	cin >> n >> m;
	long long x1, x, x2, p;
	cin >> x >> x2;
	long long gcd = x2 - x;
	for(int i=2; i<n; i++) {
		cin >> x1;
		gcd = calculateGCD(gcd, x1-x2);
		x2 = x1;
	}
	long long maxAns = 0;
	int pos = 0;
	for (int i = 0; i < m; i++) {
		cin >> p;
		if (gcd%p==0 && p>maxAns) {
			maxAns = p;
			pos = i+1;
		}
	}
	if (pos) {
		cout << "YES" << endl;
		cout << x << " " << pos << endl;
	} else {
		cout << "NO" << endl;
	}
	return 0;
}
