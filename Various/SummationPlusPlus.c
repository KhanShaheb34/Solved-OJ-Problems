#include <stdio.h>
#include <string.h>

int main()
{
	char com[4];
	int x=0, t, i=0;
	scanf("%d", &t);
	for (i = 0; i <= t; ++i)
	{
		gets(com);
		if(strcmp(com,"X++") == 0 || strcmp(com,"++X") == 0) ++x;
		else if(strcmp(com,"X--") == 0 || strcmp(com,"--X") == 0) --x;
	}
	printf("%d", x);
	gets(com);
	return 0;
}