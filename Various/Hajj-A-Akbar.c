#include <stdio.h>
#include <string.h>

int main()
{
	char word[6];
	int i=1;
	while(gets(word)){
		if (strcmp(word, "Hajj") == 0) printf("Case %d: Hajj-e-Akbar\n", i);
		else if (strcmp(word, "Umrah") == 0) printf("Case %d: Hajj-e-Asghar\n", i);
		else if(strcmp(word, "*") == 0) break;
		i++;
	}
	return 0;
}