#include<cstdio>

int main(){
    int n, x[4000], i, c=0, b;
    int a[7000]={0};
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &x[i]);
        a[x[i]]++;
    }
    for(i=0; i<n; i++){
        b=x[i];
        if(a[b]>1){
            while(a[b]!=0){
                b++;
                c++;
            }
            a[b]++;
            a[x[i]]--;
        }
    }
    printf("%d\n", c);
    return 0;
}