#include <stdio.h>

int main()
{
	int n, c=0, i;
	scanf("%d", &n);
	char w[n];
	scanf("%s", w);
	for (i = 1; i < n; ++i)
	{
		if (w[i]==w[i-1])
			c++;
	}
	printf("%d", c);
	return 0;
}