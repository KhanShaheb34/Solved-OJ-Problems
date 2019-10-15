#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	for(int q=1; q<=t; q++) {
        int n;
        cin >> n;
        int ins[n], pos, sum = 0;
        string str;
        for(int i=0; i<n; i++) {
            cin >> str;
            if(str == "SAME") {
                cin >> str >> pos;
                ins[i] = ins[pos-1];
            } else if(str == "LEFT") ins[i] = -1;
            else ins[i] = 1;
            sum += ins[i];
        }
        cout << sum << endl;
	}
	return 0;
}
