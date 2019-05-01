#include <bits/stdc++.h>
using namespace std;

int calculateGCD(int a, int b){
  if(b==0) return a;
  return calculateGCD(b, a%b);
}

int main() {
  int n;
	while(true){
		int g =0;
		cin >> n;
		if(n==0) break;
		for (int i = 1; i < n; i++){
			for (int j = i+1; j <= n; j++) {
				g+=calculateGCD(i, j);
			}
		}
		cout << g << endl;
	}
  return 0;
}
