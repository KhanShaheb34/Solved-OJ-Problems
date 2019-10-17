#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int q;
	cin >> q;
    while(q--) {
        int n, r;
        cin >> n >> r;
        vector<int> mons;
        set<int> monSet;
        for(int i=0; i<n; i++) {
            int mon;
            cin >> mon;
            if(monSet.find(mon) == monSet.end()) {
                mons.push_back(mon);
                monSet.insert(mon);
            }
        }
        sort(mons.begin(), mons.end(), greater<int>());
        int mis = 1, x = r;
        for(int i=1; i<mons.size(); i++) {
            if(mons[i] <= r) break;
            mis++;
            r+=x;
        }
        cout << mis << endl;
    }
	return 0;
}
