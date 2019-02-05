#include <stdio.h>
#include <string.h>

int main()
{
	char w[6];
	int m, i, t, s=0;
	scanf("%d", &t);
	for(i=0;i<t;i++){
		scanf("%s", &w);
		if (strcmp(w, "donate")==0)
		{
			scanf("%d", &m);
			s+=m;
		}
		if (strcmp(w, "report")==0) printf("%d\n", s);
	}
	return 0;
}