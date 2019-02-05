#include <stdio.h>

int main()
{
	char line, temp;
	while(scanf("%c",&line) != EOF){
		if(line!='\n'){
			temp=line-7;
			printf("%c",temp);
		}
		else
			printf("\n");
	}

	return 0;
}