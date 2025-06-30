#include<iostream>
using namespace std;

// class Doubly_linked_lsit{

// public:

// };

class node {
    public:
    int data;
    node* next;
    node* prev;

    //constructor
    node(int data){
        this -> data = data;
        this -> next = NULL;
        this -> prev = NULL;
    }

    //destructor
    ~node(){
    cout << "Memory deallocated of " << data << endl;
    next = NULL; // Avoid deleting next node
    }
};

void insertAthead(node* &head, int data){
    //empty list --  agr head hi NULL hua to
    if(head == NULL){
        node* temp = new node(data); //creation done
        head =  temp;
    }
    else {

    node* newnode = new node(data); //creation done
    newnode -> next = head;  //previous is pointing to NULL here as per constructor
    head -> prev = newnode;
    head = newnode;   //now newnode is the new  head..updating head
    
    }
 }
    

void insertATtail(node* &tail, int data){
    //empty list
    if(tail == NULL){
        node* temp = new node(data); //creation done
        tail = temp;
    }
    
    else{

    node* newnode = new node(data);
    tail -> next = newnode;
    newnode -> prev = tail; 
    newnode -> next = NULL; //no need ...coz we have done that in the constructor
    tail = newnode;

    }

}

void insertINmiddle(node* &head, node* &tail, int posi, int data){
    
    //inserting in middle
    if(posi == 1){
        insertAthead(head , data);
        return ;
    }

    //inserting in middle
    node* temp;
    temp = head;

    int i = 1;
    while(i<posi-1 && temp != NULL){
        temp = temp -> next;
        i++;
    }

    if(temp -> next == tail){
        insertATtail(tail, data);
        return ;
    }

    node* newnode = new node(data); //creation done
    newnode -> next = temp -> next;
    temp -> next -> prev = newnode;
    temp -> next = newnode;
    newnode -> prev = temp;

}

//delete node
void deletenode(node* &head, node* &tail, int posi){
    if(head == NULL) return ; //empty lisst
    
    //deleting head
    if(posi == 1){
        node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        node* curr = head;
        node* previous = NULL;

        int i=1;
        while(i<posi && curr != NULL){
            previous = curr;
            curr = curr -> next;
            i++;
        }
        if(curr == tail){
            previous ->next = NULL;
            curr -> next = NULL; 
            curr -> prev = NULL;
            tail = previous;
            delete curr;
        }
       else{
        previous -> next = curr -> next;
        curr -> next -> prev = previous;
        curr -> next = NULL;
        curr -> prev = NULL;
        delete curr;}

        
    }
}


//traversal
void print(node* &head){
    node* temp; 
    temp = head;
    //cout<<"hello";

    while(temp!= NULL){
        cout<<temp -> data<<" -> ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){
    
    node* node1 = new node(10);
    node* head;
    node* tail;
    head = node1;
    tail = node1;
    print(head);
    insertAthead(head, 5);
    insertAthead(head , 0);
    print(head);

    insertATtail(tail, 99);
    insertATtail(tail, 101);
    print(head);

    insertINmiddle(head, tail, 1, 333);
    insertINmiddle(head, tail, 6, 111);
    print(head);
    cout<<"head: "<<head -> data<<endl;
    cout<<"tail: "<<tail -> data<<endl;

    deletenode(head, tail, 7);
    print(head);
    cout<<"head: "<<head -> data<<endl;
    cout<<"tail: "<<tail -> data<<endl;

    return 0;
}