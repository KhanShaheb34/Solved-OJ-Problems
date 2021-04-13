#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> ap(51, -1);
    for (int i = 1; i <= n; ++i) {
    	int a;
    	cin >> a;
    	if(ap[a] == -1) ap[a] = i;
    }

    for (int i = 0; i < q; ++i) {
    	int qx;
    	cin >> qx;
    	int pos = ap[qx];
    	cout << pos << " ";
    	for(int j=1; j<=50; j++) {
    		if(ap[j] < pos) ap[j]++;
    	}
    	ap[qx]=1;
    }
}

int main() {
    FastIO;
	solve();
    return 0;
}
