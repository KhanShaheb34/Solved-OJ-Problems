#include <iostream>
#include <string>
using namespace std;

int main() {
    int t, n;
    string s;
    cin>>t;
    while(t--){
        int f=1;
        cin>>n>>s;
        for (int i=0; i<(n/2)+1; i++) {
            char a=s[i], b=s[n-i-1];
//            if((a=='a' && b=='y') || (a=='y' && b=='a') || (a=='b' && b=='z') || (a=='z' && b=='b')) f=0;
            if(a-1==b-1 || a+1==b+1 || a-1==b+1 || a+1==b-1) f=0;
            else {
                f=1;
                break;
            }
        }
        f==0?cout<<"YES\n":cout<<"NO\n";
    }
	return 0;
}
