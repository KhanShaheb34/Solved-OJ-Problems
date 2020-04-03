class Solution {
    int gen(int n) {
        int sum = 0;
        while(n) {
            int t = n%10;
            sum += t * t;
            n/=10;
        }
        return sum;
    }
public:
    bool isHappy(int n) {
        set<int> vis;
        while(true) {
            if(n==1) return true;
            
            n = gen(n);
            if(vis.find(n) != vis.end()) return false;
            vis.insert(n);
        }
        return true;
    }
};
