#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	cout << "Lumberjacks:" << endl;
	for(int i=1; i<=t; i++) {
        bool ordered = true, up;
        int beard[10];
        cin >> beard[0] >> beard[1];
        up = beard[0] < beard[1];
        for(int j = 2; j<10; j++) {
            cin >> beard[j];
            if((up && beard[j] < beard[j-1]) || (!up && beard[j] > beard[j-1])) ordered = false;
        }
        if(ordered) cout << "Ordered" << endl;
        else cout << "Unordered" << endl;
	}
	return 0;
}
