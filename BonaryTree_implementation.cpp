#include<iostream>
#include<queue>

using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    //constructor
    node(int data){
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }

};

node* buildTree(node* root){

    int data;
    cout<<"enter data: "<<endl;
    cin>>data;
    root = new node(data);

    if(root -> data == -1){
        return NULL;
    }
    cout<<"enter data for left of "<<data<<endl;
    root -> left = buildTree(root -> left);

    cout<<"enter data for right of "<<data<<endl;
    root -> right = buildTree(root -> right);
}

void level_order_traversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL); //separator

    

    while(!q.empty()){
    node* temp = q.front();
    q.pop();
    
    if(temp == NULL){
        //purana level traverse ho chuka h
        cout<<endl;

        //agr abi bi element bache h to NULL separator daal do
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

void inorder(node* root){

    //base case
    if(root == NULL){
        return ;
    }

    //L
    inorder(root -> left);

    //N
    cout<<root -> data<<" ";

    //R
    inorder(root -> right);

}

void pre_order(node* root){

    //base case
    if(root == NULL){
        return ;
    }

    //N
    cout<<root -> data<<" ";

    //L
    pre_order(root -> left);
    
    //R
    pre_order(root -> right);

}

void post_order(node* root){
    //base case
    if(root == NULL){
        return ;
    }

    //L
    post_order(root -> left);

    //R
    post_order(root -> right);

    //N
    cout<<root -> data<<" ";
}

void buildFromLevelOrderTraversal(node* &root){
    cout<<"enter data: "<<endl;
    int data;
    cin>>data;
    root = new node(data);

    queue<node*> q;
    q.push(root);

    while(!q.empty()){

        node* temp = q.front();
        q.pop();

        cout<<"enter left data for "<<temp -> data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata != -1){
            temp -> left = new node(leftdata);
            q.push(temp -> left);
        }
            

        cout<<"enter right data for "<<temp -> data<<endl;
        int rightdata;
        cin>>rightdata;
        if(rightdata != -1){
            temp -> right = new node(rightdata);
            q.push(temp -> right);
        }
    }
}

int main(){
    node* root = NULL;
//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    buildFromLevelOrderTraversal(root);
    // root = buildTree(root);
    level_order_traversal(root);

    // cout<<"inorder: "<<endl;
    // inorder(root);
    // cout<<endl;

    // cout<<"preorder: "<<endl;
    // pre_order(root);
    // cout<<endl;

    // cout<<"postorder: "<<endl;
    // post_order(root);
    // cout<<endl; 

    return 0;
}