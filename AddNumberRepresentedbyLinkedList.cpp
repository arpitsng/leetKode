#include<iostream>
#include<vector>

using namespace std;

class node{
    public:
    int data;
    node* next;
    
    //constructor
    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

//approach :
//s1 : reverse krdo list ko 

node* reverse(node* head){
    node* curr = head;
    node* prev = NULL;
    node* forward = NULL;

    while(curr != NULL){
        forward = curr -> next;
        curr -> next = prev;
        curr = forward;
        prev = curr;
    }

    return prev; //new head;
}

void insertAtTail(node* &head, node* &tail, int data){
    node* temp = new node(data);

    if(head == NULL){
        head = temp ;
        tail = temp ;
        return;
    }

    else{
        tail -> next = temp;
        tail = temp;
    }
}

node* add(node* first, node* second){
    node* ansHead = NULL;
    node* ansTail = NULL;

    int carry = 0;

    while(first != NULL || second != NULL || carry != 0){

        int val1 = 0;                            
        if(first != NULL){
            val1 = first -> data;
        }

        int val2 = 0;
        if(second != NULL){
            val2 = second -> data;
        }

        int sum = carry + val1 + val2;
        int digit = sum % 10;

        //create node and add in answer list
        insertAtTail(ansHead , ansTail, digit);
        
        carry = sum /10;
        if(first != NULL)
            first = first -> next;
                         
        if(second != NULL)
            second = second -> next ;
    }
}

node* addLL(node* first, node* second){
    //s1: reverse both the lists
    first = reverse(first);
    second = reverse(second);

    //s2: addition krdo nodes ka
     node* added = add(first, second);

    //s3: jo answer vali list(added) h usko reverse krdo taki answer shi aaye
    node* added = reverse(added);
}

int main(){


}