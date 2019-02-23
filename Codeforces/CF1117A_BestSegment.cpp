#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, ans=0, maxx=0, tempAns;
    bool cont= false;
    cin>>n;
    int x[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &x[i]);
        if(x[i]>maxx) maxx = x[i];
    }
    for(int i=0; i<n; i++) {
        if(x[i]==maxx) {
            int tempAns = 0;
            while(x[i]==maxx){
                tempAns++;
                i++;
            }
            if(ans<tempAns) ans = tempAns;
        }
    }
    printf("%d", ans);
    return 0;
}
