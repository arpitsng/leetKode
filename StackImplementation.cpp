#include<iostream>
using namespace std; //we can even use stl and its predefined function too by just including Stack


class stack{
    public:
    //properties 
    int size;
    int top;
    int *arr;

    //behaviour

    //constructor
    stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int data){

        //checking overflow
        if(top >= ( size - 1)){
            cout<<"overflow: "<<endl;
        }
        else{
            top++;
            arr[top] = data;
        }
    }

    int pop(){
        
        //checking underflow
        if( top == -1){
            cout<<"underflow: "<<endl;
            return -1;  //returning a sentinal value so that ir shows error
        }

        else{
            int value = arr[top];
            top--;
            return value;
        
        }
            
    }

    int peek(){
        if( top >= 0 ){
            return arr[top];
        }

        else{
            cout<<"stack is empty: "<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if( top == -1){
            return true;
        }
        return false;
    }

};

int main() {
    // Create a stack of size 5
    stack s(5);
    
    // Check if stack is empty initially
    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;
    
    // Push some elements
    cout << "\nPushing elements: 10, 20, 30, 40, 50" << endl;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    
    // Try to push one more element to demonstrate overflow
    cout << "\nTrying to push one more element (60):" << endl;
    s.push(60);
    
    // Pop elements until stack is empty
    cout << "\nPopping elements:" << endl;
    while (!s.isEmpty()) {
        cout << "Popped: " << s.pop() << endl;
    }
    
    // Try to pop from empty stack to demonstrate underflow
    cout << "\nTrying to pop from empty stack:" << endl;
    int val = s.pop();
    if (val == -1) {
        cout << "Pop failed as expected" << endl;
    }
    
    s.peek();
    return 0;
}