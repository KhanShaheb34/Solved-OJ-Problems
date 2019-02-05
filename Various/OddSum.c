#include <stdio.h>

int main()
{
	int t, i, a, b;
	scanf("%d", &t);
	for (i = 1; i < t+1; ++i)
	{
		int  sum=0;
		scanf("%d %d", &a, &b);
		while(a<=b){
			if (a%2!=0) sum+=a;
			a++;
		}
		printf("Case %d: %d\n", i, sum);
	}
	return 0;
}