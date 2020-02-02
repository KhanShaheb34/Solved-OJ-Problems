#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t, i=1;
	cin >> t;
	while(t--) {
		int n;
		string s;
		cin >> n >> s;
		bool bob = 0;
		cout << "Case " << i++ << ": ";
		if(s == "Bob") {
			if(n%3==0) bob = false;
			else bob = true;
		}
		else {
			if(n%3==1) bob = true;
			else bob = false;
		}
		cout << (bob ? "Bob":"Alice") << endl;
	}
	return 0;
}	
