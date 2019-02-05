#include<bits/stdc++.h>
using namespace std;

int main(){
    char si;
    char word[101], bestWord[101];
    int maxs=0, i=0, j=0;
    while(!(word[0]=='E' && word[1]=='-' && word[2]=='N' && word[3]=='-' && word[4]=='D')){
        si=getchar();
        if((si>='A' && si<='Z') || (si>='a' && si<='z') || si=='-'){
            word[i]=si;
            i++;
        }
        else{
            if(i>maxs){
                for(j=0; j<i; j++){
                    bestWord[j]=word[j];
                }
                maxs=i;
            }
            i=0;
        }
    }
    for(i=0; i<j; i++) printf("%c", tolower(bestWord[i]));
    cout<<endl;
    return 0;
}