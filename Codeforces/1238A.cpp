
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int q;
	cin >> q;
    while(q--) {
        long long x, y;
        cin >> x  >> y;
        if((x-y) > 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
	return 0;
}
