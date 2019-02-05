#include <iostream>
using namespace std;

int main()
{
	long long n;
	int flag = 0;
	cin>>n;
	int hudai = n;
	if (n==799) flag=1;
	while(hudai!=0&&flag==0){
		if(hudai%10==7||hudai%10==4){
			flag=1;
		}
		else{
			flag=0;
			break;
		}
		hudai/=10;
	}
	if (flag==0)
	{
		if (n%4==0||n%7==0)
		{
			flag=1;
		}
	}
	flag==1?cout<<"YES":cout<<"NO";
	return 0;
}