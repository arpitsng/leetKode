//https://www.naukri.com/code360/problems/middle-of-linked-list_973250?source=youtube&campaign=Lovebabbarcodestudio_24thJan&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio_24thJan

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/
int getlength(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp -> next;
    }

    return len;
}
Node *findMiddle(Node *head) {
    // Write your code here
    int len = getlength(head);
    int mid = (len/2) + 1; //or len/2 is enough is we taking i= 0
    
    Node* temp = head;
    int i = 1;
    while(i < mid){
       temp = temp -> next;
       i++;
    }

    return temp;
}

Node* (Node* head){
Node* singlestep = head;
Node* doublestep = head -> next;

//if list is empty
if(head == NULL){
    return NULL;
}

//if list has only one element
if(head -> next == NULL){
    return head;
}

//if list has 2 (two) element
if(head -> next -> next == NULL){
    return head -> next;
}

//if list has more than 2 elements
else{
    while(doublestep != NULL){

        //agr last me sirf NULL bacha or 2 jump krna h to sirf ek hi jump kro
        doublestep = doublestep -> next;
        if(doublestep != NULL){
            doublestep = doublestep -> next;
        }
        singlestep = singlestep -> next;
    }

    return singlestep;
}
}