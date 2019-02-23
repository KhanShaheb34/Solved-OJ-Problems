#include<bits/stdc++.h>
using namespace std;

int main(){
    bool arr[1000001];
    memset(arr, false, sizeof(arr));
    for(int i=0; i<=1000; i++) arr[i*i] = true;
    int n, maxx=-1000001, x;
    cin>>n;
    while(n--){
        cin>>x;
        if(maxx<x) {
            if(x<0) maxx = x;
            else if(!arr[x]) maxx = x;
        }
    }
    printf("%d\n", maxx);
    return 0;
}
