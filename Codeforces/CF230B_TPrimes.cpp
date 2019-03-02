#include<bits/stdc++.h>
using namespace std;

int primes[1000001];

int main() {
    primes[1] = 1;
    for(int i=2; i<=1000; i++) {
        if(primes[i]==0) {
            for(int j=i*i; j<=1000000; j+=i) primes[j] = 1;
        }
    }
    int n; cin>>n;
    while(n--) {
        long long x;
        cin>>x;
        long long sx = sqrt(x);
        if(primes[sx]==0 && sx * sx==x) printf("YES\n");
        else printf("NO\n");
    }
}
