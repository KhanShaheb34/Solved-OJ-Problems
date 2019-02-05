#include<stdio.h>

int main(){
    int t, n, i, j;
    scanf("%d", &t);
    while(t--){
        int ans=0;
        scanf("%d", &n);
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
        printf("Optimal train swapping takes %d swaps.\n",ans);
    }
    return 0;
}
