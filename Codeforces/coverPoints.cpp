#include<iostream>
using namespace std;

int main(){
    int n, maxx=0;
    cin>>n;
    while(n--){
        int x, y;
        cin>>x>>y;
        if(maxx<(x+y)) maxx=x+y;
    }
    cout<<maxx<<endl;
    return 0;
}
