#include<stdio.h>

int main(){
	int i, w[30]={0}, c=0;
	char a[101];
	scanf("%s", a);
	for(i=0; a[i]!='\0'; i++)
	{
		if(w[a[i]-97]==0) {
			c++;
			w[a[i]-97]++;
		}
	}
	c%2==0?printf("CHAT WITH HER!"):printf("IGNORE HIM!");
	return 0;
}
