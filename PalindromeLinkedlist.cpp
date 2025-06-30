#include<iostream>
#include<vector>

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

//approach 1: time complexity = O(n)
//sapce = O(n)
bool isPalindrome(node* head){
    vector <int> arr;

    //storing linked list elements into array
    node* temp = head;
    int i = 0;
    while(temp != NULL){
        arr.push_back(temp -> data);
        temp = temp -> next;
        i++;
    }
    //checking for array if palindrome or not
    int s = 0;
    int e = i - 1;

    //instead of i we can use arr.size() ..vector predefined function!!
    //or we can create an different function for checking palindrome for vector after filling values
    while(s <= e){
        if(arr[s] == arr[e]){
            s++;
            e--;
        }
        else{
            return 0;
            break;
        }
    }
    return 1;
}


//approach 2: find middle of ll and then reverse the part after middle and the 
//compare both halves(head to middle & middle to end(reversed))
//if these halves are equal then list is palindrome 
//second half ko firse reverse krdo taki orginal likned list retain ho jaaye
//time = O(n)
//space = O(1)

node* getmiddle(node* head){
    node* slow = head;
    node* fast = head -> next;

    while( fast != NULL && fast -> next != NULL){
        fast = fast -> next -> next;
        slow = slow -> next;
    }

    return slow;

}

node* reverse(node* head){
    node* curr = head;
    node* prev = NULL;
    node* forward = NULL;

    while(curr != NULL){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
bool isPalindrome2(node* head){
    
    //empty list or only one node
    if(head == NULL || head -> next == NULL){
        return 1;
    }

    //two node
    if(head -> next -> next == NULL){
        if(head -> data == head ->next -> data){
            return 1;
        }
    }

    //s1: find middle
    node* middle = getmiddle(head);
    
    //s2: middle k aage se reverse krdo
    node* temp = middle -> next;
    middle -> next = reverse(temp);

    //s3: comparing both halves
    node* head1 = head;
    node* head2 = middle -> next;

    while(head2 != NULL){
        if( head1 -> data != head2 -> data){
            return false;
        }

        head1 = head1 -> next;
        head2 = head2 -> next; 

    }

    //s4: vapis se reverse krdo phle jisko reverse kiya tha
    //optional 
    temp = middle -> next;
    middle -> next = reverse(temp);

    return true;
}
int main(){
    node* head = new node(1);
    // node* two = new node(2);
    // node* three = new node(1);

    head -> next = two;
    two -> next = three;
    three -> next = NULL;

    if(isPalindrome2(head)){
        cout<<"list is palindrome";
    }
    else{
        cout<<"not palindrome";
    }
    
    return 0;
}