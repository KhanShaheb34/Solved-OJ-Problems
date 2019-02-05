#include <stdio.h>
#include <math.h>

int main()
{
	int n, l=0, i;
	float x, c, m, y;
	scanf("%d%f", &n, &m);
	for (i = 1; i <= n; ++i)
	{
		scanf("%f", &c);
		x=ceil(c/m);
		if(y==x) l=i;
		else if (y<x) {
			l=i;
			y=x;
		}
	}
	printf("%d", l);
	return 0;
}