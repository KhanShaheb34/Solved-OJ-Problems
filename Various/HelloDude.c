#include<stdio.h>

int main() {
    int t,i;
    scanf("%d",&t);
    int a[t], b[t];
    for(i=0;i<t;i++) {
        scanf("%d %d", &a[i], &b[i]);
    }
    for(i=0;i<t;i++) {
        printf("Case %d: %d\n", i+1, (a[i]+b[i]));
    }
    return 0;
}
