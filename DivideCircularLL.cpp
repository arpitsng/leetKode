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

int length(node* head){

    int cnt = 1;
    node* temp = head;

    while(temp -> next != head){
        
        temp = temp -> next;
        cnt++;
    }

    return cnt;
}

node* divideCircularLL(node* head){
    // int len = length(head);
    // node* temp = head;
    // int i = 1;
    // node* tail_ka_next_for_first_half = NULL;
    // while(temp != head && i < len/2){
    //     temp = temp -> next;
    //     i++;
    //     tail_ka_next_for_first_half = temp -> next;
    // }
    // temp -> next = head;

    // node* head_for_2nd = tail_ka_next_for_first_half;

    //phle list ko singly bna do

    node* temp = head;
    while(temp -> next != head){
        temp = temp -> next;
    }
    temp -> next = NULL;
    //now the list is convertef into singly list

    int len = length(head);
    int i = 1;
    node* newTemp = head;
    node* temp_ka_next = NULL ; 
    while(newTemp != NULL && i <= len/2){
        newTemp = newTemp -> next;
        i++;
        temp_ka_next = newTemp -> next;
    }
    newTemp -> next = head ; //first division done
    int j = 1; 
    node* secondHead = temp_ka_next;
    while(temp_ka_next != NULL && j< len/2){
        temp_ka_next = temp_ka_next -> next ;
        j++;
    }

    temp_ka_next -> next = secondHead;

    return head ,secondHead;
}

pair<node* , node* > divideCircularLL2(node* head){
    int len = length(head);
    int mid = len/2;

    //convert circular to singly

    node* temppo = head;
    node* temppo = head;
    while (temppo->next != head) {
        temppo = temppo->next;
    }
    node* temp = head;
    node* prev = NULL;
    for(int i = 0; i< mid; i++){
        prev = temp;
        temp = temp -> next;
    }

    if(prev != NULL){
        prev -> next = head;
    }

    node* secondHead = temp;

    node* newtemp = temp;

    while(newtemp != NULL){
        newtemp = newtemp -> next;
    }
    newtemp -> next = secondHead;

    return {head, secondHead};

}

void print(node* head){
    node* temp = head;
    //empty list
    if(head == NULL) cout <<"empty list"<<endl;
    
    while(temp != NULL){
        cout<<temp -> data<<" -> ";
        temp = temp -> next;
    }
    cout<<endl;
}



int main(){
    node* head = new node(1);
    node* two = new node(2);
    node* three = new node(3);
    node* four = new node(4);
    node* tail = new node(99);

    
    head -> next = two;
    two -> next = three;
    three -> next = four;
    four -> next = tail;
    tail -> next = head;

    cout<<length(head)<<endl;

    return 0;
}