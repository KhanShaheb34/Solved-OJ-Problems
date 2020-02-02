#include <bits/stdc++.h>
using namespace std;
 
 
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n&1)cout<<7<<string((n-2)/2,'1')<<endl;
		else cout<<string((n)/2,'1')<<endl;
	}
	return 0;
}
