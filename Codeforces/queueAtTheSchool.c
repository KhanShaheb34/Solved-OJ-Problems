#include <stdio.h>

int main()
{
	int n, t, i, j;
	scanf("%d%d", &n, &t);
	char q[n];
	scanf("%s", q);
	for (i = 0; i < t; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			if (q[j]=='B' && q[j+1]=='G')
			{
				q[j]='G';
				q[j+1]='B';
				j++;
			}
		}
	}
	printf("%s", q);
	return 0;
}