#include<iostream>
#include<map>
using namespace std;

/* 

approaches to remove duplicate from unsorted ll is
1. sort the ll and then remove duplicate by i , i+1 vale method se
2. map lgao or usse kro

*/

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

void removeDuplicates(node* head){

    if(head == NULL) return ;

    //non- empty list
    node* curr = head;

    while(curr != NULL){
        if((curr -> next != NULL) && curr -> data == curr -> next ->data){
            node* nodetodelete = curr -> next ;
            node* next_ki_next = curr -> next -> next;
            delete(nodetodelete);
            curr -> next = next_ki_next;
        }

        else{
            curr = curr -> next ; //aage bdate rho
        }
    }

   // return head;
}

void removeDuplicatesFromUnsortedLL(node* head){

    if(head == NULL) return ; //empty list

    map <int , bool> visited;
    node* curr = head;  
    node* prev = NULL;
    while(curr != NULL){
        if(visited[curr -> data] == true){
            node* nodetodelete = curr;
            prev -> next = curr -> next;
            curr = curr -> next;
            delete(nodetodelete);
        }

        else{
            visited[curr -> data] = true;  //mark krdo true
            prev = curr;
            curr = curr -> next;
        }
    }
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
    node* three = new node(2);
    node* four = new node(4);
    node* tail = new node(99);

    
    head -> next = two;
    two -> next = three;
    three -> next = four;
    four -> next = tail;
    tail -> next = NULL;

    print(head);

    removeDuplicatesFromUnsortedLL(head);
    print(head);

    return 0;
}