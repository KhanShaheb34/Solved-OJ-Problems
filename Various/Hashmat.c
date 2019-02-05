#include <stdio.h>

int main()
{
	long long int a, b, s;
	while(scanf("%lld %lld", &a, &b) != EOF){
		s=a-b;
		if (s<0) s*=-1;
		printf("%lld\n",s);
	}
	return 0;
}