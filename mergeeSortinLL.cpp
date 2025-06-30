#include<iostream>


//Following is the representation of the Singly Linked List Node:

    class node{
        public:
            int data;
            node * next;
            node(int data){
                this->data=data;
                this->next=NULL;
            }
    };
    
node* findmid(node* head){
  
    node* slow = head;
    node* fast = head -> next ;

    while(fast != NULL && fast -> next != NULL){

        slow = slow -> next;
        fast = fast -> next -> next ;
    }

    return slow;
}

node* merge(node* first, node* second){
   
   node* ans = new node(-1);
   node* temp = ans;

   while( first != NULL && second != NULL){
       if(first -> data >= second -> data){
           temp -> next = second;
           temp = second;
           second = second -> next;
       }

       else{
           temp -> next = first;
           temp = first;
           first = first -> next;
       }
   }

   while( first != NULL){
        temp -> next = first;
        temp = first;
        first = first -> next;
   }

   while( second != NULL ){
       temp -> next = second;
       temp = second;
       second = second -> next;
   }


   return ans -> next ;
}
node* mergeSort(node *head) {
    // base case
    if(head == NULL || head -> next == NULL){
        return head;
    }

    //dividing ll after finding mid
    node* mid = findmid(head);
    
    node* left = head;
    node* right = mid -> next;
    
    mid -> next = NULL;

    //recurcive calls
    left = mergeSort(left);
    right = mergeSort(right);

    //merging
    node* result = merge(left, right);

    return result;
}
