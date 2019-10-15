#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n, p, c;
	cin>>t;
	for(int i=1; i<=t; i++) {
        cin >> n;
        cin >> p;
        n--;
        int h=0, l=0;
        while(n--) {
            cin >> c;
            if(c > p) h++;
            if(p > c) l++;
            p = c;
        }
        cout << "Case " << i << ": " << h << " " << l << endl;
	}
	return 0;
}
