#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    //constructor
    node(int data){
        this -> data = data;
        this -> next =  NULL;
    }
    
    //destructor
   ~node(){
    if (next != this) {
        delete next;
    }
    cout << "memory deallocated of " << data << endl;
}
};

//insertion after any given element
void insert_After_Element(node* &tail, int element, int data){

    //if list is empty 
    if( tail == NULL){
        node* newnode = new node(data);
        tail = newnode;  //it is the new tail
        newnode -> next = newnode;  
    }
    //if list is not empty
    //assuming that the element exist in the list
    else{
        node* curr = tail;
    
        
        while(curr -> data != element){
            curr = curr -> next;
        }
        node* newnode = new node(data); //creation done
        newnode -> next = curr -> next;
        curr -> next = newnode;

         // Update tail if the new node is inserted after the current tail
        // if (curr == tail) {
        //     tail = newnode;
        // }

    }
}

//delete node of given element
void deleteNode(node* &tail, int element){
    
    //if the list is empty
    if(tail == NULL){
        cout<<"the list is empty:`"<<endl;
    }
    
    else{

    //asuming that the element exist in the list
    node* previous = tail;
    node* curr = tail -> next;

    while(curr -> data != element){
        previous = curr;
        curr = curr -> next;
    }

    //if only one element is there
    if(curr == tail && curr -> next == tail){  //od if(curr == tail)
        tail = NULL; 
        delete curr;
    }
    //if the element is the tail
    else if(curr == tail){
        previous -> next = curr -> next;
        curr -> next = NULL;
        tail = previous;  //updating the tail
        delete curr;
    }
    else{
        previous -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}
}

//traversal
void print(node* tail){
    node* temp = tail;

//do while coz if there is only one element while loop will not work
//in do while the statements are executed once 
//first it executes the statements and then check the conditions
//so agr ek element hoga to bi chlega h without checking the condition


    //empty list
    if(tail == NULL){
        cout<<"the list is empty"<<endl;
        return;
    }

    do{
        cout<<tail -> data<<" -> ";
        tail = tail -> next;
    }while(tail!= temp);
    cout<<endl;
}


int main(){
    
    node* tail = NULL;
    insert_After_Element(tail, 3, 10); //element doesnt matter here coz its the first element
    print(tail);

    insert_After_Element(tail, 10, 20); 
    print(tail);

    insert_After_Element(tail, 20, 30);
    print(tail);

    insert_After_Element(tail, 30, 40); 
    print(tail);

    insert_After_Element(tail, 40, 60); 
    print(tail);
    
    insert_After_Element(tail, 40, 50); 
    print(tail);


    deleteNode(tail, 60);
    print(tail);
    return 0;
}