#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, f=0;
    while(scanf("%d", &n)!=EOF){
        if(f) cout<<endl;
        f=1;
        int sum, i=n/2, j=0, k=1;
        sum=(n*n*n+n)/2;
        int mag[20][20];
        while(k<=(n*n)){
            mag[i][j]=k;
            if(k%n==0) j++;
            else{
                i++;
                j--;
            }
            k++;
            if(j<0) j=n-1;
            if(i==n) i=0;
        }
        cout<<"n="<<n<<", sum="<<sum<<endl;
        int p=1, t=n*n;
        while(t){
            p++;
            t/=10;
        }
        for(j=0;j<n;j++){
            for(i=0;i<n;i++){
                cout<<setfill(' ')<<setw(p)<<mag[i][j];
            }
            cout<<endl;
        }
        /*for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
              cout << setfill(' ') << setw(p) << mag[j][i];

            printf("\n");
        }*/
    }
    return 0;
}
