#include<stdio.h>

int main()
{
    int n, i, flag=0;
    scanf("%d", &n);
    int a[n+1];
    for(i=1; i<=n; i++){ scanf("%d", &a[i]); --a[i];}
    for(i=1; i<=n; i++) {
        if(a[i]==a[a[a[a[i]]]]){
            flag=1;
            break;
        }
    }
    flag=0 ? printf("No") : printf("Yes");
    return 0;
}
