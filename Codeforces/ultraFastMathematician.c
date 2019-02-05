#include <stdio.h>

int main(){
	char n1[101], n2[101];
	int i=0, j;
	do{
		scanf("%c", &n1[i]);
		i++;
	} while(n1[i-1]!='\n');
	i--;
	for (j = 0;j < i; ++j) {
		scanf("%c", &n2[j]);
		if(n1[j]==n2[j]) n1[j]='0';
		else n1[j]='1';
	}
	for (j = 0; j < i; ++j)
		printf("%c", n1[j]);
	return 0;
}