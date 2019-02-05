#include<stdio.h>

int main()
{
	int s, a, b, i, c=0, x=-1;;
	scanf("%d", &s);
	for (i = 0; i < s; ++i)
	{
		scanf("%d", &a);
		c-=a;
		scanf("%d", &b);
		c+=b;
		if(x<c) x=c;
	}
	printf("%d", x);
	return 0;
}