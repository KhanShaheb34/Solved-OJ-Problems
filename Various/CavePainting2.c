#include<stdio.h>

int main() {
    long int n, k, i;
    int flag=1;
    scanf("%ld%ld", &n, &k);
    for (i = 1; i <= k; i++){
         if ((n+1)%i!=0){
            flag=0;
            break;
        }
    }
    if(flag==1) printf("Yes\n");
    else printf("No\n");
    return 0;
}
