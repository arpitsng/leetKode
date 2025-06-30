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

bool detect_loop(node* head){  //time coplexity = O(n)
                              //space complexity = O(n)
    
    //empty list
    if(head == NULL){
        return false;
    }

    //only one node
    if(head -> next == NULL){
        return false;
    }
    
    map <node* , bool> visited;  //key ,value pair
    node* temp = head;

    while(temp != NULL){
        
        //cycle is present
        if(visited[temp] == true){ //agr phle se hi true mark hua h to
            cout<<"cycle is present at "<<temp -> data<<endl;
            return true; 
        }

        visited[temp] = true;  //visit krne k baad true mark krdo
        temp = temp -> next;
    }

    return false; //koi loop nhi h
}

node* floyds_detect_loop(node* head){  //time coplexity = O(n)
                                    //space complexity = O(1)
    
    //empty list
    if(head == NULL) return NULL; 
    
    //only one node
    if(head -> next == NULL) return NULL;

    //node* temp = head;
    node* slow = head;
    node* fast = head;

    while(fast != NULL){
       
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }
        slow = slow -> next;
        //cycle present
        if(slow == fast){
           // cout<<"cycle present at: "<<slow -> data<<endl;
            return slow;
        }
        
    }
    return NULL;
}

//now to get starting node of the cycle 
node* startingNode(node* head){
    
    //empty list
    if(head == NULL){
        return NULL;
    }
    node* slow = head;
    node* intersection = floyds_detect_loop(head);

    while(slow != intersection){
        slow = slow -> next;
        intersection = intersection -> next;
    }
    return slow;  //this will be the starting point
}

void removeLoop(node* head){

    //empty list
    if(head == NULL){
        return;
    }
    node* loopstart = startingNode(head);
    node* temp = loopstart;

    while(temp -> next != loopstart){
        temp = temp -> next;
    } 
    //starting node se ek phele vali ko null point krdo to loop remove ho jayega
    temp -> next = NULL;
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
    four -> next = two;

    

    if(floyds_detect_loop(head) != NULL){
        cout<<"yes: cycle is present "<<endl;
    }
    else{
        cout<<"cycle is absent: "<<endl;
    }

    //node* loop = startingNode(head);
    cout<<"starting node of cycle/loop: "<<startingNode(head)-> data<<endl;

    removeLoop(head);
    print(head);

    return 0;
}