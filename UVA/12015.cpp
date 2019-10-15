#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	for(int q=1; q<=t; q++) {
        int rel[10], maxr = INT_MIN;
        string url[10];
        for(int i=0; i<10; i++) {
            cin >> url[i] >> rel[i];
            maxr = max(rel[i], maxr);
        }
        cout << "Case #"<< q << ":" << endl;
        for(int i=0; i<10; i++) {
            if(rel[i]==maxr) cout << url[i] << endl;
        }
	}
	return 0;
}
