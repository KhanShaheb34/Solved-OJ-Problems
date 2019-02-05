#include<bits/stdc++.h>
#define MAX 100000
using namespace std;

int main(){
    int k, n, v;
    scanf("%d", &k);
    while(k--){
        int VPerH[MAX]={0}, b, h, w, d, i, minh=MAX, maxh=0;
        long long int total=0;
        scanf("%d", &n);
        while(n--){
            scanf("%d%d%d%d", &b, &h, &w, &d);
            if(minh>b) minh=b;
            if(maxh<(b+h)) maxh=b+h;
            total+=(h*w*d);
            for(i=b; i<(b+h); i++){
                VPerH[i]+=(w*d);
            }
        }
        int c=minh, f=0;
        float fracAns;
        scanf("%d", &v);
        int totalV=v;
        for(i=minh; i<maxh; i++){
            if((v-VPerH[i])>0) v-=VPerH[i], c++;
            else break;
        }
        if(totalV==0) printf("0.00");
        else if(total>totalV) {
            if(v-VPerH[i]==0){
                c++;
                printf("%.2f\n", (float)c);
            }
            else{
                fracAns=(float)c;
                float fv = (float) v, FVperH = (float) VPerH[i];
                fracAns+=(fv/FVperH);
                printf("%.2f\n", fracAns);
            }
        }
        else printf("OVERFLOW\n");
    }
    return 0;
}
