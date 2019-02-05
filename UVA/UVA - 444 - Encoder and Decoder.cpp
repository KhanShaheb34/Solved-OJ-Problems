#include <bits/stdc++.h>
using namespace std;

int main(){
    string st;
    int s;
    while(getline(cin, st)){
        s=st.size();
        string stOut[300];
        int x=0;
        if(st[0]>47 && st[0]<58){
            for(int i=s-1; i>=0;){
                if(st[i]=='1') {
                    x=100+(st[i-1]-'0')*10+(st[i-2]-'0');
                    printf("%c", x);
                    i-=3;
                }
                else {
                    x=(st[i]-'0')*10+(st[i-1]-'0');
                    printf("%c", x);
                    i-=2;
                }
            }
        }
        else{
            for(int i=s-1; i>=0; i--){
                int x=st[i];
                for(;x>0;x/=10) printf("%d", x%10);
            }
        }
        cout<<endl;
    }
    return 0;
}