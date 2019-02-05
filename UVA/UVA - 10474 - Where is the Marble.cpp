#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, q, t=1;
    while(scanf("%d%d", &n, &q)){
        if(n==0 && q==0) break;
        int num[n], qu;
        for(int i=0; i<n; i++) scanf("%d", &num[i]);
        printf("CASE# %d:\n", t);
        for(int i=0; i<q; i++){
            scanf("%d", &qu);
            bool found = false;
            for(int j=0; j<n; j++){
                if(qu==num[j]){
                    printf("%d found at %d\n", qu, j+2);
                    found = true;
                    break;
                }
            }
            if(!found) printf("%d not found\n", qu);
        }
        t++;
    }
    return 0;
}
