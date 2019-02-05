#include <stdio.h>
#include <ctype.h>

int main()
{
	char w[100];
	int s, b, i=0;
	scanf("%s", w);
	while(w[i]!='\0'){
		if (w[i]<91) b++;
		else if (w[i]>96) s++;
		i++;
	}
	i=0;
	if (s>=b){
		while(w[i]) {
	      	w[i]=tolower(w[i]);
	    	i++;
	   	}
	}
	else{
		while(w[i]) {
	      	w[i]=toupper(w[i]);
	    	i++;
	   	}
	}
	printf("%s", w);
	return 0;
}