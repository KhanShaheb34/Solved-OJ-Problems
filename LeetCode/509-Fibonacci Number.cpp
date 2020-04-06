class Solution {
public:
    
    int fib(int N) {
        if(N==0 || N==1) return N;
        int f0 = 0, f1 = 1, curr = 0;
        for(int i=2; i<=N; i++) {
            curr = f0 + f1;
            f0 = f1;
            f1 = curr;
        }
        return curr;
    }
};
