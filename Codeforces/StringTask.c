#include<stdio.h>
#include<ctype.h>

int main(){
    char w[100], temp=' ';
    int i=0,j;
    while(temp!='\n'){
        scanf("%c",&w[i]);
        w[i]=tolower(w[i]);
        temp=w[i];
        i++;
        if(temp=='a' || temp=='y' || temp=='u' || temp=='o' || temp=='i' || temp=='e') i--;
    }
    for(j=0;j<=i-2;j++) {
        printf(".%c", w[j]);
    }
    return 0;
}
