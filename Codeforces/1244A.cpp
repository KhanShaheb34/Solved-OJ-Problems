#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int q;
	cin >> q;
    while(q--) {
        double a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        if(ceil(a/c) + ceil(b/d) > e) {
            cout << "-1" << endl;
        } else {
            cout << e - ceil(b/d) << " " << ceil(b/d) << endl;
        }
    }
	return 0;
}
