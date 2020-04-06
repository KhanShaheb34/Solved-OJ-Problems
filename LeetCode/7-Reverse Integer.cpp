class Solution {
public:
    int reverse(int x) {
        if(!x || x >= 2147483647 || x <= -2147483648) return 0;
        int ax = abs(x);
        int len = pow(10, (int)log10(ax));
        int ans = 0;
        while(ax) {
            if((long long)ans + (long long)(ax%10) * (long long)len >= 2147483647)
                return 0;
            ans += (ax%10) * len;
            ax /= 10; len /= 10;
        }
        return ans * (x/abs(x));
    }
};
