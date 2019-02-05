#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j < n-i; ++j)
			cout<<"  ";
		for (int j = 0; j <= i; ++j){
			cout<<j;
			if(i>0) cout<<" ";
		}
		for (int j = n-i; j < n; ++j)
			cout<<n-j-1<<" ";
		cout<<endl;
	}
	for (int i = n-1; i >= 0; --i)
	{
		for (int j = 0; j < n-i; ++j)
			cout<<"  ";
		for (int j = 0; j <= i; ++j)
			cout<<j<<" ";
		for (int j = n-i; j < n; ++j)
			cout<<n-j-1<<" ";
		cout<<endl;
	}
	return 0;
}