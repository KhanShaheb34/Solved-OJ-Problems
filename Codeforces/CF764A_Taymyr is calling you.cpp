#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m, z;
    cin>>n>>m>>z;
    int big = max(n,m);
    int small = min(n,m);
    int lcd;
    if(big%small) {
        for(int i=big;;i+=big)
            if(i%small==0){
                lcd = i;
                break;
            }
    }
    else lcd = big;
    printf("%d\n", z/lcd);
    return 0;
}

