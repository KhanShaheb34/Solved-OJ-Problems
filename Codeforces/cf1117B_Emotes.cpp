
#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, k, m, maxx=0, secMax=0, x;
    scanf("%lld%lld%lld", &n, &k, &m);
    while(n--) {
        cin>>x;
        if(x>maxx) secMax = maxx, maxx = x;
        else if(x>secMax) secMax = x;
    }
    if(k==m){
        printf("%lld\n", maxx*m);
        return 0;
    }
    long long ans = maxx * ((k/(m+1))*m + k%(m+1)) + secMax * (k/(m+1));
    printf("%lld\n", ans);
    return 0;
}
