#include <stdio.h>

int main()
{
	int n, e[1000], i, j=1;
	scanf("%d",&n);
	while(n!=0){
		int bal=0;
		for (i = 0; i < n; ++i)
		{
			scanf("%d",&e[i]);
			if (e[i]>0) bal++;
			else if (e[i]==0) bal--;
		}
		printf("Case %d: %d\n", j, bal);
		j++;
		scanf("%d",&n);
	}
	return 0;
}