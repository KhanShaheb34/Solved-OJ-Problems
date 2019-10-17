#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int n;
	cin >> n;
	int a[n], b[n], x;
	bool check[n+1] = {false};
	for(int i=0; i<n; i++){
        cin >> a[i];
	}
	int ans = 0, flag = 0;
	for(int i=0; i<n; i++) {
        cin >> b[i];
	}
 
	for(int i=n-1, j=n-1; i>=0 && j>=0; ) {
        check[a[i]] = true;
        if(a[i] == b[j]) {
            j--, i--;
        } else {
            if(!check[b[j]]) ans++, i--;
            else j--;
        }
	}
	cout << ans;
	return 0;
}
