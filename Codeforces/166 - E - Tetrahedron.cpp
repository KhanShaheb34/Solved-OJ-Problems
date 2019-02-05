#include<iostream>
using namespace std;

int main(){
    long long t;
    cin>>t;
    if(t==1){
        cout<<0<<endl;
        return 0;
    }
    long long num = 1, adder = 0, sum =1;
    for(int i=2; i<t; i++){
        sum = (num + adder) * 2 + adder;
        adder = num;
        num = sum;
        num=num%1000000007;
        adder = adder % 1000000007;
    }
    sum=(sum*3)%1000000007;

    cout<<sum<<endl;
    return 0;
}

