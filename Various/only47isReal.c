#include <iostream>
using namespace std;

int main()
{
	long long num;
	int c=0;
	cin>>num;
	while(num!=0){
		if (num%10==4 || num%10==7) c++;
		num/=10;
	}
	if (c==7 || c==4) cout<<"YES";
	else cout<<"NO";
	return 0;
}