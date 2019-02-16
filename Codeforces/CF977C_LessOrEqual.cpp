#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    vector<int> a;
    for(int i=0; i<n; i++) {
        int t;
        scanf("%d", &t);
        a.push_back(t);
    }
    sort(a.begin(), a.end());
    if(n == k){
        printf("%d\n", a[n-1]);
        return 0;
    }
    if(k == 0) {
        if(a[0]==1) printf("-1");
        else printf("1");
        return 0;
    }
    if (a[k - 1] == a[k]) printf("-1");
    else printf("%d\n", a[k-1]);
}
