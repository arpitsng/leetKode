#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;  //self refrencing structure
};

struct node* create_node(int data){
    struct node* newNode;
    newNode = (struct node*)malloc(sizeof(struct node)); //memory allocated to newnode
    newNode->data = data; //data given to the node
    newNode->next = NULL;  //itll point to null in the main we'll provide the link
    return newNode;
}

//linked list traversal
void print(struct node* head){
    struct node* temp ;//= (struct node*)malloc(sizeof(struct node));
    temp = head;
    while(temp != NULL){
       
        if(temp->next == NULL){
            cout<<temp->data<<" -> NULL "<<endl;
        }
        else{
            cout<<temp->data<<" -> ";
        }
         temp = temp ->next;
    }
}

int main(){
   
    struct node* head = create_node(10);
    struct node* second = create_node(20);
    struct node* third = create_node(30);

    head -> next = second;
    second ->next = third;
    third -> next = NULL;  //last node to be defined
    print(head);

    return 0;
}