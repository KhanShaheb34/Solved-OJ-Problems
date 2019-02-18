#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        long long n;
        scanf("%lld", &n);
        printf("%lld\n", ((n*(n+1))/2)-2*((long long)pow(2,(long long)log2(n)+1)-1));
    }
    return 0;
}
