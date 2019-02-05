#include<stdio.h>
#include<string.h>

int main() {
    char w[100];
    int t, i;
    scanf("%d", &t);
    for (i = 0; i < t; ++i)
    {
    	scanf("%s", w);
    	int l=strlen(w);
    	if (l>10)
    	{
    		printf("%c", w[0]);
    		printf("%d", l-2);
    		printf("%c\n", w[l-1]);

    	}
    	else printf("%s\n", w);
    }
    return 0;
}
