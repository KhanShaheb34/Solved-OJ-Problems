#include<stdio.h>
#include<math.h>

int main(){
    int t,i,temp;
    scanf("%d",&t);
    int n[t],ans[t];
    for(i=0;i<t;i++){
        scanf("%d", &n[i]);
    }
    for(i=0;i<t;i++){
        ans[i]=(((((n[i]*567)/9)+7492)*235)/47)-498;
        temp=(ans[i]%100)/10;
        printf("%d\n",abs(temp));
    }
    return 0;
}
