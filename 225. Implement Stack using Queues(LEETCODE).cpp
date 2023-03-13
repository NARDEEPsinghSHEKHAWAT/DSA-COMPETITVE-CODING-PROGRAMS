class MyStack {
queue<int> q1,q2;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
//In this we put the element of the q1 to the q2 but not the last element of the q1.
        if(q1.empty())return -1;
        int el=q1.back();
        int i=0;
        while(i<q1.size()-1){
                q2.push(q1.front());
            
            q1.pop();
        }
        q1.pop();
       while(!q2.empty()){
           q1.push(q2.front());
           q2.pop();
       }
        return el;
    }
    
    int top() {
        return q1.back();
    }
    
    bool empty() {
        if(q1.empty()) return true;
        return false;
    }
};
