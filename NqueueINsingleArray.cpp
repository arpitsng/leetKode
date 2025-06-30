#include<iostream>


using namespace std;


class KQueue{
private:
    int n;  //size of array
    int k;  //no. of queue
    int freespot;
    int *front;
    int *rear;
    int *next;
    int* arr;

public:

    //constructor
    KQueue(int n, int k){
        this -> n = n;
        this -> k = k;
        arr = new int[n];
        front = new int[k];
        //inititalize front
        for(int i=0; i<k; i++){
            front[i] = -1;
        }

        rear = new int[k];
        //initialize rear with -1 too
        for(int i=0; i<k; i++){
            rear[i] = -1;
        }

        next = new int[n];
        //initialize next with i+1
        for(int i=0; i<n; i++){
            next[i] = i+1;
        }
        next[n-1] = -1;

        
        freespot = 0;
    }

    void enqueue(int data, int qn){

        //check overflow
        if(freespot == -1){
            cout<<"overflow"<<endl;
            return;
        }

        //find free index to push and also update after finding
        int index = freespot;
        freespot = next[index];


        //first element to push
        if(front[qn -1] == -1){
            front[qn -1] = index;
        }
        else{
            //linking to next element
            next[rear[qn-1]] = index;
        }

        //update next
        next[index] = -1;

        //update rear
        rear[qn-1] = index;

        //now push data into array
        arr[index] = data;
    }

    int deque(int qn){

        //underflow check
        if(front[qn-1] == -1){
            cout<<"underflow:"<<endl;
            return -1;
        }

        //find index to pop
        int index = front[qn-1];

        //update front
        front[qn-1] = next[index];

        //manage freespots and return value
        next[index] = freespot;
        freespot = index;
        return arr[index];
    }
}; 

int main(){
    KQueue q(10, 3); //size of arr = 10, no. of queue = 3
    q.enqueue(10, 1);
    q.enqueue(20, 1);
    q.enqueue(30,2);
    q.enqueue(40, 1);

    cout<<q.deque(1)<<endl;
    cout<<q.deque(1)<<endl;
    cout<<q.deque(1)<<endl;
    cout<<q.deque(1)<<endl;
    cout<<q.deque(2)<<endl;
    cout<<q.deque(2)<<endl;


    return 0;
}


