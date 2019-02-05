#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, i, j, c=0, z=0;
    char ch;
    bool flag=false;
    vector<int> topp;
    vector<int> bott;
    vector<int> ::iterator it;
    cin>>t;
    getchar();
    for(i=0; i<t; i++){
        topp.clear();
        bott.clear();
        while(1){
            ch=getchar();
            if(ch=='^') topp.push_back(i);
            if(ch=='_') bott.push_back(i);
            if(ch=='\n') break;
        }
        bott.push_back(-1);
        while(1){
            if(bott[0]>topp[z]){
                it=bott.begin();
                bott.erase(it);
            }
            else{
                int check=1;
                while(check<topp.size()){
                    if(bott[0]<topp[check]){
                        c++;
                        it=bott.begin();
                        bott.erase(it);
                        break;
                    }
                    check++;
                }
                z+=check;
            }
            if(bott[0]==-1) break;
        }
        cout<<"Case "<<i+1<<": "<<c<<endl;
        c=0;
    }
    return 0;
}
