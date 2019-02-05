#include <stdio.h>

int main()
{
	char w;
	int f=0;
	while(1){
		scanf("%c", &w);
		if (w=='H' || w=='Q' || w=='9')
		{
			f=1;
		}
		else if (w=='\n')
			break;
	}
	f==0?printf("NO"):printf("YES");
	return 0;
}