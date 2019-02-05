#include <stdio.h>

int main()
{
	long long int x;
	int c=0;
	scanf("%lld", &x);
	while(x>0){
		if ((x%10)==4 || (x%10)==7)
			c++;
		x/=10;
	}
	if(c==4 || c==7) printf("YES");
	else printf("NO");
	return 0;
}