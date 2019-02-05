#include <stdio.h>

int main()
{
	char w;
	int x[30]={0}, y[30]={0}, i, f=0;
	while(1){
		scanf("%c", &w);
		if (w=='\n') break;
		x[w-65]++;
	}
	while(1){
		scanf("%c", &w);
		if (w=='\n') break;
		x[w-65]++;
	}
	while(1){
		scanf("%c", &w);
		if (w=='\n') break;
		y[w-65]++;
	}
	for (i = 0; i < 30; ++i)
	{
		if (x[i]!=y[i])
		{
			f=1;
			break;
		}
	}
	f==0?printf("YES"):printf("NO");
	return 0;
}