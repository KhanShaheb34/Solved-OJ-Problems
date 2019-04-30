#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[4], max=0, pos;
	for (int i = 0; i < 4; i++) {
		cin >> a[i];
		if(a[i] > max) {
			max = a[i];
			pos = i;
		}
	}
	for (int i = 0; i < 4; i++) {
		if(i == pos) continue;
		cout << max - a[i] << " ";
	}
	return 0;
}
