#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n], c=0, m=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		if (a[i]!=a[i-1]) c++;
		else c=0;
		if (m<c) m=c;
	}
	m--;
	cout<<n<<endl<<m<<endl<<n-m;
	(n-m)<1?cout<<"NO":cout<<"YES";
	return 0;
}