#include <stdio.h>

int main()
{
	char w[1000];
	scanf("%s", w);
	if (w[0]>96) w[0]-=32;
	printf("%s", w);
	return 0;
}