#include<bits/stdc++.h>
#define MAX 1000000000
using namespace std;

int main() {
    bool numChecker[MAX]={false};
    unsigned int nums[MAX];
    int x, n, k, maxx=0, i, c=0;
    cin>>n>>k;
    for(i=0; i<n; i++){
        cin>>nums[i];
        if(nums[i]>maxx) maxx=nums[i];
        numChecker[nums[i]]=true;
    }
    for(i=0; i<maxx; i++) if(numChecker[nums[i]*k]==true) c++;
    cout<<max(c, n-c)<<endl;
    return 0;
}
