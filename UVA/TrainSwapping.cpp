#include<bits/stdc++.h>
using namespace std;

int main(){
    int s, n, i, j, k;
    scanf("%d%d", &s, &n);
    int ls[n]={0};
    string strs[n];
    for(k=0; k<n; k++){
        scanf("%s", &strs[k]);
        for(i=0; i<n; i++){
            for(j=0; j<n-i-1; j++){
                if(strs[k][j]>strs[k][j+1]) {
                    ls[k]++;
                    char temp = strs[k][j];
                    strs[k][j] = strs[k][j+1];
                    strs[k][j+1] = temp;
                }
            }
        }
    }

    return 0;
}
