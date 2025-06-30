#include<iostream>
#include<map>
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

//approach one: when data replacement is allowed
// count the no. of 1 2 0 and the just replace it with the org data

void sort012_1(node* head){
    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;

    node* temp = head;

    while(temp != NULL){
        if(temp -> data == 0){
            cnt0++;
        }
        else if(temp -> data == 1){
            cnt1++;
        }
        else if(temp -> data == 2){
            cnt2++;
        }
        temp = temp -> next; 
    }

        node* newtemp = head;
        // for(int i = 0; i < cnt0 ; i++){
        //     newtemp -> data = 0;
        //     newtemp = newtemp -> next;
        // }

        // for(int i = 0; i < cnt1 ; i++){
        //     newtemp -> data = 1;
        //     newtemp = newtemp -> next;
        // }

        // for(int i = 0; i < cnt2 ; i++){
        //     newtemp -> data = 2;
        //     newtemp = newtemp -> next;
        // }

        while(newtemp != NULL){
            if(cnt0 != 0){
                newtemp -> data = 0;
                cnt0 --;
            }

            else if(cnt1 != 1){
                newtemp -> data = 1;
                cnt1--;
            }
            else if(cnt2 != 2){
                newtemp -> data = 2;
                cnt2--;
            }
        }
    }

//approach 2: when data replacement is not allowed
//in this we'll be playing with the links 


    void insertAttail (node* &tail , node* temp){
        tail -> next = temp ;
        tail = temp; 
    }
    
    node* sort012_2(node* head){
        node* zerohead = new node(-1);  //dummy node
        node* zerotail = zerohead; //initially
    
        node* onehead = new node(-1);
        node* onetail = onehead;
    
        node* twohead = new node(-1);
        node* twotail = twohead;
    
        node* temp = head;
    
        while(temp != NULL){
            
            int value = temp -> data;
            if(value == 0){
                insertAttail(zerotail , temp);
            }
    
            else if(value == 1){
                insertAttail(onetail , temp);
            }
    
            else if(value == 2){
                insertAttail(twotail , temp);
            }
            temp = temp -> next;
        }
    
        //merging 3 substrings
    
        //if 1s list is non empty
        if(onehead -> next != NULL){ 
            zerotail -> next = onehead -> next;
        }
    
        //if 1s list is empty
        else{
            zerotail -> next = twohead -> next;
        }
    
        
        onetail -> next = twohead -> next;
        twotail -> next = NULL;
    
        head = zerohead -> next;
    
        //delete the dummy pointers
    
        delete onehead;
        delete twohead;
        delete zerohead;
    
        return head;
        
        
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
    node* four = new node(0);
    node* tail = new node(0);

    
    head -> next = two;
    two -> next = three;
    three -> next = four;
    four -> next = tail;
    tail -> next = NULL;

    print(head);

    sort012_1(head);

    print(head);

    return 0;

}
