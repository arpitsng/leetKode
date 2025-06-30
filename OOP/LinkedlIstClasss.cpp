#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    //constructor for Node creation
    node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    //destructor
    ~node(){
        int value = this -> data;
        cout<<"memory deallocated of "<<value<<endl;
    }
};

    //function to insert a node at Head
    void insertAThead(node* &head,int data){
        //empty list
        if(head == NULL){
        node* temp = new node(data); //creation done
        head =  temp;
    }
    else{
        node* newNode = new node(data); //creation kri phle
        newNode -> next = head ;   //pointing to head
        head = newNode;           //declared it as new head
    }
        
    }

    //function to insert at tail/end
    void insertATtail(node* &tail, int data){
        //empty list
        if(tail == NULL){
        node* temp = new node(data); //creation done
        tail =  temp;
    }
    else{
        node* newnode = new node(data); //creation done
        tail -> next = newnode; //now tail is pointing to new node
        newnode -> next = NULL; // now new node is pointing to tail
        tail = newnode;  //now new node is the new tail

    }
        
    }

    //function to insert at specific position on index
    void insertATposition(node* &head, node* &tail, int posi, int data){
        node* newnode = new node(data); //creation
        node* temp = head; //node ko assign krdiya as temp
        
        for(int i=1; i<posi-1; i++){
            temp = temp -> next; //bdate rho aage
        }
        if(posi == 1){
            insertAThead(head, data);
        }

        if(temp -> next == tail){
            insertATtail(tail, data);
        }

        else{
        newnode -> next = temp -> next;
        temp -> next = newnode;  //insertion done
        }
    }

    //function to delete a node
    void deletenode(node* &head, node* &tail, int posi){
        
        //deleting the first node ie head node
        if(posi == 1){
            node* temp = head; 
            head = head -> next;  //updated the head
            temp -> next = NULL; //delete krne se phle isko null se point krvado 
            delete temp;
        }

        //deleting the middle node
        else{
            node* curr = head; //current node pointing to head
            node* prev = NULL;  //initially pointing to nothing [privious node]

            int i = 1;
            while(i < posi  && curr != NULL ){
                prev = curr;
                curr = curr -> next ;
                i++;
            }
            
            //this is to update the tail
            if(curr -> next == NULL){
                prev -> next = NULL;
                delete curr;
                tail = prev;
            }

            else{
            prev -> next = curr -> next;
            curr -> next = NULL ;
            delete curr;  //freed memory of current
            }
        }
    }

    //function for traversal of linked list
    void print(node* &head){
        node* temp = head; 
        while(temp != NULL){
            cout<<temp -> data<<" -> ";
            temp = temp -> next;  //aage badhte rho
        }
        cout<<endl;
    }



int main(){

    node* node1 = new node(10); //since there is only one node so this is head and tail itself
    node* Head = node1;
    node* tail = node1;
    print(Head);
    insertAThead(Head , 99);
    print(Head);
    insertAThead(Head, 101);
    print(Head);
    // insertATtail(tail, 99);
    // print(head);
    // insertATtail(tail, 101);
    // print(head);
    
    insertATposition(Head,tail, 3, 888);
    print(Head);

   deletenode(Head ,tail, 4);
   print(Head);

   cout<<"head: "<<Head -> data<<endl;
    cout<<"tail: "<<tail -> data<<endl;

    return 0;
}
