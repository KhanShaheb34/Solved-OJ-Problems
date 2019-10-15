#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	for(int q=1; q<=t; q++) {
        int n, m = 0, j = 0, p;
        cin >> n;
        while(n--) {
            cin >> p;
            m += (p/30+1)*10;
            j += (p/60+1)*15;
        }
        if(m < j) cout << "Case "<< q << ": Mile " << m << endl;
        else if(m > j) cout << "Case "<< q << ": Juice " << j << endl;
        else cout << "Case "<< q << ": Mile Juice " << m << endl;
	}
	return 0;
}
