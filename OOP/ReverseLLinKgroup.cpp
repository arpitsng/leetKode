/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

 Node* kReverse(Node* head, int k) {
    // Write your code here.

    //step 1: looping se reverse kro
    
    //base case
    if(head == NULL){
        return NULL;
    }

    //check if there are atleast k nodes left so leave the as it is
    Node* temp = head;
    int nodeCNT = 0;
    while(temp != NULL && nodeCNT < k){
        temp = temp -> next ;
        nodeCNT++;
    }

    // If less than k nodes, return head without reversing
    if(nodeCNT < k){  //leave it as it is
        return head;
    }

    Node* curr = head;
    Node* prev = NULL; 
    Node* forward = NULL;

    int count = 0;
    while(curr != NULL && count < k){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
        count++;  //increment krte rho
    }

    //step 2: recursion se aage ka solve krdo
    
    //base case bna diya upr ..
    if(forward != NULL){
        head -> next = kReverse(forward, k);
    }
    
    return prev;  //final head of reversed ll



}