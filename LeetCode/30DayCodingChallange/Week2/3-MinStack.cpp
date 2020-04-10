class MinStack {
private:
    int mn, mnarr[7500], arr[7500], curr;
public:
    /** initialize your data structure here. */
    MinStack() {
        mn = INT_MAX;
    }
    
    void push(int x) {
        arr[curr] = x;
        mn = min(mn, x);
        mnarr[curr] = mn;
        curr++;
    }
    
    void pop() {
        curr--;
        if(curr == 0) 
            mn = INT_MAX;
        else
            mn = mnarr[curr-1];
    }
    
    int top() {
        return arr[curr-1];
    }
    
    int getMin() {
        return mnarr[curr-1];
    }
};

auto speedup=[](){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
