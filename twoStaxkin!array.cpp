#include <iostream> 
class TwoStack {
    
        int size;
        int top1;
        int top2;
        int *arr;
public:

    // Initialize TwoStack.
    TwoStack(int s) {
        this -> size = s;
        top1 = -1;
        top2 = s ;
        arr = new int[size];
    }
    
    // Push in stack 1.
    void push1(int num) {
        // for stack 1 we r going from left to right and opp for stack 2
        if( top2 - top1 > 1){
            top1++;
            arr[top1] = num;
            
        }

        // else{
        //     cout<<"stack 1 overflow";
        // }
    }


    // Push in stack 2.
    void push2(int num) {
        // going right to left
        if( top2 - top1 > 1 ){
            top2--;
            arr[top2] = num;
            
        }

        // else{
        //    cout<<"stack2 is overflow: "<<endl;
        // }
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        if(top1 >= 0){
            int value = arr[top1];
            top1--;
            return value;
            
        }

        else{
          // cout<<"stack1 underflow: "<<endl;
            return -1;
        }
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        if( top2 <= size - 1 ){
            int value = arr[top2];
            top2++;
            return value;
            
        }

        else{
           //cout<<"stack2 is underflow: "<<endl;
            return -1;
        }
    }
};
