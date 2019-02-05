#include<bits/stdc++.h>
#define MAX 1000000000
using namespace std;

int main(){
    int n, t, i;
    long long int a[210];
    bool checker[MAX];
    scanf("%d", &t);
    while(t--){
        int ans=0, maxx=0;
        scanf("%d", &n);
        n*=2;
        for(i=0; i<n; i++){
            scanf("%lld", &a[i]);
            checker[a[i]]=true;
            i++;
            scanf("%lld", &a[i]);
            checker[a[i]]=false;
        }
        sort(a, a+n);
        for(i=0; i<n; i++){
            if(checker[a[i]]) ans++;
            else ans--;
            maxx = max(maxx, ans);
        }
        printf("%d\n", maxx);
    }
    return 0;
}