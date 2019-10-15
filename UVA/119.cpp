#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, asdf=0;
	while(scanf("%d", &n) != EOF) {
        if(asdf>0) cout << endl;
        asdf++;
        map<string, int> gift;
        string pips[n];
        string name;
        for(int i=0; i<n; i++) {
            cin >> name;
            gift.insert({name, 0});
            pips[i] = name;
        }
        int m, p;
        for(int i=0; i<n; i++) {
            cin >> name >> m >> p;
            if(p!=0) {
                gift[name]-=m;
                gift[name]+=m%p;
            }
            int temp = p;
            while(temp--) {
                cin >> name;
                gift[name]+=(m/p);
            }
        }
        for(int i=0; i<n; i++) {
            cout << pips[i] << " " << gift[pips[i]] << endl;
        }

	}
	return 0;
}
