#include <bits/stdc++.h> 
/*************************************************
        Following is the structure of class Node:
     
        class Node{
        public:
            int data;
            Node* next;
            
            Node(int data){
                this->data = data;
                this->next = NULL;
            }
            
        }
**************************************************/

bool isCircular(Node* head){
    // Write your code here.

    //case 1: if Head = NUll or empty list
    if(head == NULL){
        return true;
    }

    //case 2 : if there is one node
    if(head -> next == NULL ){
        return false;
    }

    if(head -> next = head){
        return true;
    }

    //case 3 : if there are more than 1 node

    Node* temp = head -> next;

    while(temp != NULL && temp != head){
        temp = temp -> next; //aage bdate rho
    }

    if(temp -> next == NULL){
        return false;
    }

    if(temp -> next == head){
        return false;
    }
}

