#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m, c, it=1;
	while(cin >> n >> m >> c, n || m || c) {
        vector<int> con;
        vector<bool> on(n, false);
        int ci, s, p = 0, maxp = INT_MIN;
        bool fuse = false;
        for(int i=0; i<n; i++) {
            cin >> ci;
            con.push_back(ci);
        }
        for(int i=0; i<m; i++) {
            cin >> s;
            s--;
            on[s] = !on[s];
            if(on[s]) p += con[s];
            else p -= con[s];

            if(p > c) fuse = true;
            if(p>maxp) maxp = p;
        }
        cout << "Sequence " << it++ << endl;
        if(fuse) cout << "Fuse was blown." << endl;
        else {
            cout << "Fuse was not blown." << endl;
            cout << "Maximal power consumption was " << maxp <<" amperes." << endl;
        }
        cout << endl;
	}
	return 0;
}
