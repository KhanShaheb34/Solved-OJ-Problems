#include<stdio.h>

int main() {
    int m, n, i;
    scanf("%d%d", &n,&m);
    double min, a, b;
    scanf("%lf%lf", &a,&b);
    min=a/b;
    for(i=1;i<n;i++){
        scanf("%lf%lf", &a, &b);
        if(min>(a/b)) min=a/b;
    }
    printf("%lf", min*m);
    return 0;
}
