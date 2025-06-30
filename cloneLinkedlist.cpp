#include<iostream>
#include<map>
using namespace std;


class node{
    public:
    int data;
    node* next;
    node* random;  //this is new

    //constructor
    node(int d){
        this -> data = d;
        this -> next = NULL;
        this -> random = NULL;
    }
};


//approach 1: first traverse base on next pointer 
//s2: pta kro kitna aage h random pointer 
//T = O(n^2)
//ek for loop uske ander while loop
node* cloneLinkedList(node* head){

}

void insertAtTail(node* &head, node* &tail, int data){
    node* newnode = new node(data);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return ; 
    }

    else{
        tail -> next = newnode;
        newnode = tail;
    }
}


//approach 2: t = O(n), sc = O(n)
node *clonelist2(node* head){
    //s1: create a clone list

    node* clonehead = NULL ;
    node* clonetail = NULL;

    node* temp = head;
    while(temp != NULL){
        insertAtTail(clonehead, clonetail, temp -> data);
    }

    //s2: create a map
    map <node* , node*> oldToNew;
    node* originalnode = head;
    node* clonenode = clonehead;

    while( originalnode != NULL ){
        oldToNew[originalnode] = clonenode;
        originalnode = originalnode -> next;
        clonenode = clonenode -> next;
    }
    while( originalnode != NULL && clonenode != NULL){ //any one condition is enough as both are same

        clonenode -> random = oldToNew[ originalnode -> random ]; 
        originalnode = originalnode -> next;
        clonenode = clonenode -> next;
    }
    return clonehead;

}

//approach 3: 
class Solution
{
   private:
    void insertAtTail(node* &head, node* &tail, int d) {
        node* newnode = new node(d);
        if(head == NULL) {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail -> next = newnode;
            tail = newnode;
        }
    }
    
    void print(node* head) {
        while(head != NULL) {
            cout << head -> data << " ";
            head = head -> next;
        }cout << endl;
    }

    void printRandom(node* head) {
        while(head != NULL) {
            cout << " head data: " << head->data <<" ";
            if(head ->random != NULL) {
                cout << " head random data" << head -> random ->data;
            }
            else
            {
                cout << " head random data: NULL";
            }
            head = head -> next;
            cout << endl;
        }
    }

    public:
    node *copyList(node *head)
    {
        //step 1: Create a Clone List
        node* cloneHead = NULL;
        node* cloneTail = NULL;
        
        node* temp = head;
        while(temp != NULL) {
            insertAtTail(cloneHead, cloneTail, temp->data);
            temp = temp -> next;
        }
        
        // step 2: insert nodes of Clone List in between originalList
        
        node* originalnode = head;
        node* clonenode = cloneHead;
        
        while(originalnode != NULL && clonenode != NULL) {
            node* next = originalnode -> next;
            originalnode -> next = clonenode;
            originalnode = next;
            
            next = clonenode -> next;
            clonenode -> next = originalnode;
            clonenode  = next;
        }
        
        // step 3: Random pointer copy
        originalnode = head;
        clonenode = cloneHead;
        
        while(originalnode != NULL && clonenode != NULL) { 
            
            if(originalnode -> random != NULL) {
                clonenode -> random = originalnode -> random -> next;
            }
            else
            {
                clonenode -> random  = NULL;
            }
            
            clonenode = clonenode -> next;
            originalnode = originalnode -> next;
        }
        
        //step 4: revert step 2 changes
        node* original = head;
        node* copy = cloneHead;
        
         while (original && copy)
            {
                original->next =
                 original->next? original->next->next : original->next;
         
                copy->next = copy->next?copy->next->next:copy->next;
                original = original->next;
                copy = copy->next;
            }

        // step 5 answer return
        return cloneHead;
    } 
};