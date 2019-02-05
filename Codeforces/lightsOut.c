#include <stdio.h>

int main()
{
	int l[3][3]={0}, i, j, s;
	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 3; ++j)
		{
			scanf("%d", &s);
			l[i][j]+=s;
			if(i>0) l[i-1][j]+=s;
			if(j>0) l[i][j-1]+=s;
			if(i<2) l[i+1][j]+=s;
			if(j<2) l[i][j+1]+=s;
		}
	}
	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 3; ++j)
		{
			l[i][j]++;
			printf("%d", l[i][j]%2);
		}
		printf("\n");
	}
	return 0;
}