#include <stdio.h>

int main()
{
	int t, m, i;
	scanf("%d%d", &t, &m);
	int c=0, max=m, min=m;
	for (i = 1; i < t; ++i)
	{
		scanf("%d", &m);
		if (m>max)
		{
			max=m;
			c++;
		}
		if (m<min)
		{
			min=m;
			c++;
		}
	}
	printf("%d", c);
	return 0;
}