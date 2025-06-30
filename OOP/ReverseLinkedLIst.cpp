void reverse(LinkedListNode<int> *&head,LinkedListNode<int> *curr, LinkedListNode<int> *prev){
    //base case
    if(curr == NULL){
        head = prev ; //update the head
        return ; //new head
    }
    LinkedListNode<int> *forward = curr -> next;
    reverse(head, forward, curr); //forward ki place pe curr -> next bi pass krwa skte
    curr -> next = prev;
}
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
     //if ll is empty or has only 1 node
    if(head == NULL || head -> next == NULL){
        return head;
    }

    // //assuming ll is not empty and has more than 1 node
    LinkedListNode<int> *curr = head;
    LinkedListNode<int> *prev = NULL;
    LinkedListNode<int> *forward = NULL;  //initially 
    reverse(head, curr, prev);
    // prev = curr;
    // forward = curr -> next;
    return head;
    
    // while(curr != NULL){

    //     forward = curr -> next;
    //     curr -> next = prev;
    //     prev = curr;
    //     curr = forward;
    // }

    // return prev;  //prev is the new head
}

node* reverse1(node* head){
    //base case
    if(head == NULL || head -> next == NULL){
        return head;
    }
    node* newHead = reverse1(head -> next);
    head -> next -> next = head;
    head -> next = NULL;
    return newHead;

}