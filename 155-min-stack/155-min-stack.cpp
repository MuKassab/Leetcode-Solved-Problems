class MinStack {
public:
    stack<int> st;
    multiset<int> ms;
    
    MinStack() {
        st = stack<int>();
        ms.clear();
    }
    
    void push(int val) {
        st.push(val);
        ms.insert(val);
    }
    
    void pop() {
        int tp = st.top();
        st.pop();
        auto it = ms.find(tp);
        ms.erase(it);
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return *ms.begin();
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