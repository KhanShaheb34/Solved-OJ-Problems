#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	cin>>s;
	int q;
	cin >> q;
	vector<set<int> > pos(26);
	for(int i=0; i<s.size(); i++) {
        pos[s[i]-'a'].insert(i);
	}
	while(q--){
        int t;
        cin >> t;
        if(t==1) {
            int p; char c;
            cin >> p >> c;
            p--;
            pos[s[p]-'a'].erase(p);
            s[p] = c;
            pos[s[p]-'a'].insert(p);
        }
        else if(t==2) {
            int from, to;
            cin >> from >> to;
            from--, to--;
            int counter=0;
            for(int i=0; i<26; i++) {
                set<int>::iterator it = pos[i].lower_bound(from);
                if(it != pos[i].end() && *it <= to) counter++;
            }
            cout << counter << endl;
        }
	}
	return 0;
}
