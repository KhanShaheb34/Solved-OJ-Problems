#include<stdio.h>

int main() {
    int a[100], i=0,j;
    while(a[i-1]!=42){
        scanf("%d",&a[i]);
        i++;
    }
    for(j=0;j<i-1;j++){
        printf("%d\n",a[j]);
    }
    return 0;
}
