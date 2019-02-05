#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, f=0, x;
    vector<int> arr;
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    for(int i=2; i<n; i++) {
        if(arr[i-2]+arr[i-1]>arr[i]) {
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}