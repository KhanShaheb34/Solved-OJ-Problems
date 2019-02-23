#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    vector<int> v;
    cin>>n;
    while(n--){
        cin>>x;
        v.push_back(x);
    }
    sort(v.rbegin(), v.rend());
    cout<<v[v.size()/2];
    return 0;
}
