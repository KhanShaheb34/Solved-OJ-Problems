#include<stdio.h>

void mid(int a,int b, int c) {
    int midl=a;
    if(a>b){
        if(a>c){
            if(b>c) midl=b;
            else midl = c;
        }
    }
    else if (b>a) {
        if(b<c) midl = b;
        else {
            if(c>a) midl = c;
        }
    }
    printf("%d", midl);
}

int main() {
    int t, i, j;
    scanf("%d",&t);
    int a[t],b[t],c[t];
    for(i=0;i<t;i++) {
        scanf("%d %d %d", &a[i],&b[i],&c[i]);
    }
    for(i=0;i<t;i++) {
        printf("Case %d: ",i+1);
        mid(a[i],b[i],c[i]);
        printf("\n");
    }

    return 0;
}
