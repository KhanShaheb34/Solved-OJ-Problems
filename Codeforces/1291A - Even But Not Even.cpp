#include<bits/stdc++.h>
using namespace std;
 
int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--) {
		int n;
		string s, ans = "";
		cin >> n >> s;
 
		for(auto c:s) {
			if((c-'0')%2) ans += c;
			if(ans.length() == 2)  break;
		}
		if(ans.length() < 2) cout << "-1" << endl;
		else cout << ans << endl;
	}
	return 0;
}
