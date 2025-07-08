#include<iostream>
#include<queue>
using namespace std;

class Node{

public:
    int data;
    Node* left;
    Node* right;

    //constructor
    Node(int data){
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};
void LevelTraversal(Node* root){
    if(root == NULL){
        cout<<"empty: " <<endl; 
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp -> data<<" ";
            if(temp -> left)
                q.push(temp -> left);
            
            if(temp -> right)
                q.push(temp -> right);
        }
        
    }

}

void insertInBST(Node* &root, int d){  //TC: O(logn) -- same as binary search
    //base case
    if(root == NULL){
        root = new Node(d);
        return ;
    }
    

    if(d > root -> data){
        insertInBST(root -> right, d);
    }
    else{
        insertInBST(root -> left, d);
    }

}

void takeInput(Node* &root){
    //enter data   
    int d;
    cout<<"enter data to insert"<<endl;
    cin>>d;

    while(d != -1){
        insertInBST(root, d);
        cin>>d;
    }
}

// TC -- O(N)  -- for skew tree(only left/right subtree)
//avg case TC -- O(H) [height]
//SC -- O(H)
bool searchInBST(Node* root, int target){ 
    //base case
    if(root == NULL)
        return false;

    if(root -> data == target)
        return true;

    else if(root -> data > target){
        return searchInBST(root -> left, target);
    }
    else    
        return searchInBST(root -> right, target);
}

bool searchInBSTiterative(Node* root, int target) { //iterative -- constant space  
    if(root == NULL) return false;
    Node* temp = root;

    while(temp != NULL){ 

        if(temp -> data == target)
            return true;

        else if(temp -> data > target)
            temp = temp -> left;

        else 
            temp = temp -> right;
    }

    return false;
}
Node* maxVal(Node* root){
    if(root == NULL) return NULL;

    Node* temp = root;
    while(temp -> right != NULL){
        temp = temp -> right;
    }
    return temp;
}

Node* minVal(Node* root){
    if(root == NULL) return NULL;

    Node* temp = root;
    while(temp -> left != NULL){
        temp = temp -> left;
    }
    return temp;
}

Node* deleteFromBST(Node* root, int val){
    //base case
    if(root == NULL) return NULL;
    
    //s1: find the node to delete
    if(root -> data == val){
    
    //0 child
    if(root -> left == NULL && root -> right == NULL){
        delete root;
        return NULL;
    }

    //1 child

    //only left part exist
    if(root -> left != NULL && root -> right == NULL){
        Node* temp = root -> left;
        delete root;
        return temp;
    }

    //only right part exist
    if(root -> left == NULL && root -> right != NULL){
        Node* temp = root -> right;
        delete root;
        return temp;
    }

    //2 child
    if(root -> right && root -> left){
        //we can take either max value from left or min value from right
        int mini = minVal(root -> right) -> data;
        //copy the min val tp root
        root -> data = mini;
        //delete the min value
        root -> right = deleteFromBST(root -> right, mini);
        return root;
    }

    }

    else if(root -> data > val){
        root -> left = deleteFromBST(root -> left, val);
        return root;
    }

    else{
        root -> right = deleteFromBST(root -> right, val);
        return root;
    }
    
}

int main(){
    Node* root = NULL;
    takeInput(root);
    LevelTraversal(root);

    int target = 10;
    if(searchInBST(root, target))
        cout<<"found: "<<endl;
    else
        cout<<"not found: "<<endl;

    if(searchInBSTiterative(root, target))
        cout<<"found by iteration: "<<endl;
    else
        cout<<"not found by iteration: "<<endl;

    cout << " after deleting 10 : "<< endl;
    root = deleteFromBST(root , 10);
    LevelTraversal(root);       

    return 0;
}