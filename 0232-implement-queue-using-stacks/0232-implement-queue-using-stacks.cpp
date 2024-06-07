// class MyQueue {
// public:
//     stack <int> input,output;
//     MyQueue() {       
//     }
    
//     void push(int x) {
//        input.push(x); 
//     }
    
//     int pop() {
//         // if(input.empty() && output.empty()){
//         //     return -1;
//         // }
//         int d;
//         if(!output.empty()){
//             d = output.top();
//             output.pop();
//         }else{
//             while(!input.empty()){
//                 output.push(input.top());
//                 input.pop();
//             }
//         }
//         return d;
//     }
    
//     int peek() {
//         // if(input.empty() && output.empty()){
//         //     return -1;
//         // }
//         // int d;
//         // if(!output.empty()){
//         //     d = output.top();
//         //}else{
//             // while(!input.empty()){
//             //     output.push(input.top());
//             //     input.pop();      
//             //}
//         //}
//         if(output.empty()){
//             while(!input.empty()){
//                 output.push(input.top());
//                 input.pop();
//             }
//         }
//         int d=output.top();
//         return d;
//     }
    
//     bool empty() {
//         return (input.empty() && output.empty());
//     }
// };

// /**
//  * Your MyQueue object will be instantiated and called as such:
//  * MyQueue* obj = new MyQueue();
//  * obj->push(x);
//  * int param_2 = obj->pop();
//  * int param_3 = obj->peek();
//  * bool param_4 = obj->empty();
//  */

class MyQueue {
    stack<int>stack1;
    stack<int>stack2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        stack1.push(x);        
    }
    
    int pop() {
        if(stack1.empty() && stack2.empty()){
            return -1;
        }
        if(stack2.empty()){
            while(!stack1.empty()){
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        int pop_top = stack2.top();
        stack2.pop();
        return pop_top;
    }
    
    int peek() {
        if(stack1.empty() && stack2.empty()){
            return -1;
        }
        if(stack2.empty()){
            while(!stack1.empty()){
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        int peek_top = stack2.top();
        return peek_top;

        
    }
    
    bool empty() {
        if(stack1.empty() && stack2.empty()){
            return true;
        }
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */