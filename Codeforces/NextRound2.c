#include<stdio.h>

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    int p[n], i, c=0, flag=0, co=0;
    for (i = 0; i < n; ++i){
        scanf("%d", &p[i]);
        if (p[i]!=0) flag=1;
    }
    for(i=0;i<n;i++){
        if (p[i]<p[k]) break;
        c++;
    }
    printf("%d", flag==0?flag:c);
    return 0;
}
