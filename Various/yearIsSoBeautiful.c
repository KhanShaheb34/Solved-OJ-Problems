#include <stdio.h>

int main()
{
	int y, a, b, c, d, i;
	scanf("%d", &y);
	for (i = y+1; i < 9013; ++i)
	{
		a=i%10;
		b=(i%100)/10;
		c=(i%1000)/100;
		d=i/1000;
		if (a==b || a==c || a==d || b==c || b==d || c==d) continue;
		else {
			printf("%d\n", i);
			break;
		}
	}
	return 0;
}