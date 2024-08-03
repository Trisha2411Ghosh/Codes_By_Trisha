class MinStack {
    stack<long long> st;
    long long mini;
public:
    MinStack() {
        while(st.empty()==false){
            st.pop();
        }
        mini=INT_MAX;
    }
    
    void push(int value) {
        long long val=value;
        if(st.empty()){
            mini=val;
            st.push(val);
        }
        else{
            if(val>mini){
                st.push(val);
            }
            else{
                st.push(2*val-mini);
                mini=val;
            }
        }
    }
    
    void pop() {
        if(st.empty()) return;
        long long d=st.top();
        st.pop();
        if(d<mini){
            mini=2*mini-d;
        }
    }
    
    int top() {
        if(st.empty()) return -1;
        long long d=st.top();
        if(d<mini) return mini;
        return d;
    }
    
    int getMin() {
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */