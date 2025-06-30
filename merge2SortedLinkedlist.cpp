#include<iostream>

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

//merging

//easy and efficient approach
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
private:

    ListNode* merge( ListNode* list1, ListNode* list2 ){

        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;

        // Traverse both lists and pick the smaller value each time
        while( list1 && list2 ){

            if( list1 -> val <= list2 -> val){
                temp -> next = list1;
                temp = list1;
                list1 = list1 -> next;
            }
            else{
                temp -> next = list2;
                temp = list2;
                list2 = list2 -> next; 
            }

            if(list1 != NULL) {
                temp->next = list1;
            } 
            else {  
                temp->next = list2;
            }

            //temp->next = list1 ? list1 : list2;
            //if list1 not null h to tail ka next list1 kro nhi to list2
        }

        return dummy -> next;
    }

public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if( list1 == NULL )
            return list2;
        
        if( list2 == NULL )
            return list1;

        if( list1 -> val < list2 -> val) 
            return merge( list1, list2);

        else
            return merge( list2, list1);
    }
};

node* solve(node* head1, node* head2){

    node* curr1 = head1;
    node* next1 = curr1 -> next;

    node* curr2 = head2;
    node* next2 = curr2 -> next;

    if(head1 -> next == NULL){  //agr phli list me sirf ek hi element h to
        curr1 -> next = curr2;
        return head1;
    }

    while( next1 != NULL && curr2 != NULL){
  
        if((curr2 -> data >= curr1 -> data) && (curr2 -> data <= next1 -> data) ){
            curr1 -> next = curr2;
            next2 = curr2 -> next;
            curr2 -> next = next1;
            
            curr1 = curr2;
            curr2 = next2;

        }

        else{ //if data doesn't lie between the node ..curr1 pr next1 ko aage bdao
            curr1 = next1;
            next1 = next1 -> next;

            if(next1 == NULL){  //agr phli list khtm ho gyi to dusri list ko as it is lga do uske aage
                curr1 -> next = curr2;  
                return head1;
            }
        }
    
     return head1;
}
}

node* mergeSorted(node* head1, node* head2){

    //if list 1 is empty
    if(head1 == NULL) return head2;

    //if list 2 is empty
    if(head2 == NULL) return head1;

    //if both the lists are non empty

    if(head1 -> data >= head2 -> data){
        return solve(head1, head2);
    }

    if(head2 -> data >= head2 -> data){
        return solve(head2, head1);
    }

}