#include <stdio.h>

int main()
{
	int n, i;
	scanf("%d", &n);
	if (n%2!=0 || n<2)
		printf("-1");
	else{
		for (int i = 1; i <= n; ++i)
		{
			i%2==0?printf("%d ", i-1):printf("%d ", i+1);
		}
	}
	return 0;
}