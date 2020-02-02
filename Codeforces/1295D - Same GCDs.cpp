#include <bits/stdc++.h>
using namespace std;

const int mx=100010;
int flag[mx];
vector<long long> v;

long long f(long long n)
{
	long long ans=n;
	for(int i=0;i<v.size() and v[i]*v[i]<=n;i++)
	{
		int  c=0;
		while(n%v[i]==0)
		{
			n/=v[i];
			c++;
		}
		if(c)ans=(ans/v[i])*(v[i]-1LL);
	}
	if(n!=1)ans=(ans/n)*(n-1);
	return ans;
}

int main(int argc, char const *argv[])
{

	for(int i=4;i<mx;i+=2)flag[i]=1;
	for(int i=3;i*i<mx;i+=2)if(!flag[i])for(int j=i+i;j<mx;j+=i)flag[j]=1;
	for(int i=2;i<mx;i++)if(!flag[i])v.push_back(i);

	int t;
	cin>>t;
	while(t--)
	{
		long long n,k;
		cin>>n>>k;
		long long g=__gcd(n,k);
		long long p=k/g;
		if(k<100)
		{
			int c=0;
			for(int i=0;i<k;i++)if(__gcd(n+i,k)==g)c++;
				cout<<c<<endl;
		}
		else
		cout<<f(p)<<endl;
	}
	return 0;
}
