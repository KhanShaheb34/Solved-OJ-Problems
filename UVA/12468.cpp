#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b;
	while(cin >> a >> b, a!=-1 && b!=-1) {
        if(a<b) swap(a, b);
        cout << min(a-b, 99-a+b+1) << endl;
	}
	return 0;
}
