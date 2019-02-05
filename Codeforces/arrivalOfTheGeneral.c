#include <stdio.h>

int main()
{
	int n, max=0, min=100, x, y;
	scanf("%d", &n);
	int m[n], i;
	for (i = 0; i < n; ++i)
	{
		scanf("%d", &m[i]);
		if (m[i]>max) {max=m[i]; x=i;}
		if (m[i]<=min) {min=m[i]; y=i;}
	}
	int z=i-y+x-1;
	if(x>y) z-=1;
	printf("%d", z);
	return 0;
}