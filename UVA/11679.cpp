#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int b = 1, n = 1;
    while(cin >> b >> n, b || n) {
        int r, d, c, v;
        int banks[b+1];
        for(int j = 1; j<=b; j++) {
            cin >> r;
            banks[j] = r;
        }
        while(n--) {
            cin >> d >> c >> v;
            banks[d]-=v;
            banks[c]+=v;
        }
        bool flag = true;
        for(int j = 1; j<=b; j++) {
            if(banks[j]<0) {
                cout << "N" << endl;
                flag = false;
                break;
            }
        }
        if(flag) cout << "S" << endl;
	}
	return 0;
}
