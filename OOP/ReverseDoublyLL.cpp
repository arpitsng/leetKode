#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* prev;

    //constructor
    Node (int d){
        this -> data = d;
        this -> next = NULL;
        prev -> next = NULL;  //or we can use this pointer to point to the previous node
    }
};

Node* reverse(Node* &head){

    Node* curr = head;
    Node* prev = NULL;
    Node* forward = NULL;

    while(curr != NULL){
        
    }
}


int main(){
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* tail = new Node(3);

    head -> next = second;
    second -> next = tail;

    tail -> prev = second;
    second -> prev = head;

    node* reversed_Head = reverse(head);

    return 0;
}