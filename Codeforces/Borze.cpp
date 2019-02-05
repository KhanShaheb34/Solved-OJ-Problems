#include <stdio.h>

int main(){
	char a;
	int n[201], i=0, j=0;
	while(1){
		scanf("%c", &a);
		if (a=='.') n[i]=0;
		else if(a=='-'){
			scanf("%c", &a);
			if (a=='.') n[i]=1;
			else if(a=='-') n[i]=2;
		}
		else break;
		i++;
	}
	for (j = 0; j < i; ++j)
		printf("%d", n[j]);
	return 0;
}