#include <stdio.h>

int main()
{
	int p[15]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47}, i, n, m, x=0;
	scanf("%d%d", &n, &m);
	for (i = 0; i < 15; ++i)
	{
		if(p[i]==n) {x=i; break;}
	}
	p[i+1]==m?printf("YES"):printf("NO");
	return 0;
}