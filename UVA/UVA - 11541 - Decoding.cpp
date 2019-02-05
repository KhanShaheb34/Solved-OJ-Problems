#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        string line;
        cin>>line;
        char temp=line[0];
        cout<<"Case "<<i<<": ";
        for(int j=1; j<line.size(); j++){
            int m=1, num=0;
            while(line[j] >= '0' && line[j] <= '9'){
                num=num*m+(line[j]-'0');
                m*=10;
                j++;
            }
            while(num--) cout<<temp;
            temp=line[j];
        }
        cout<<endl;
    }
    return 0;
}