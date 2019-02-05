#include<stdio.h>

int main(){
    int n, i, j;
    while(scanf("%d", &n)!=EOF){
        int ans=0;
        int nums[n];
        for(i=0; i<n; i++)
            scanf("%d", &nums[i]);

        for(i=0; i<n; i++){
            for(j=0; j<n-i-1; j++){
                if(nums[j]>nums[j+1]) {
                    ans++;
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                }
            }
        }
        printf("Minimum exchange operations : %d\n",ans);
    }
    return 0;
}
