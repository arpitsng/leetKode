#include<iostream>
using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch){
        data = ch;
        isTerminal = false;
        for(int i=0 ;i<26; i++){
            children[i] = NULL;
        }
    }
};

class Trie{
    public:
    TrieNode* root; 

    Trie(){
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode* root, string word){

        //base case
        if(word.length() == 0){
            root -> isTerminal = true;
            return;
        }

        //assuming words are in caps
        int index = word[0] - 'A';
        TrieNode* child;

        //present
        if(root -> children[index] != NULL){
            child = root -> children[index];
        }

        //absent
        else{
            child = new TrieNode(word[0]);
            root -> children[index] = child;
        }

        //RECURSION
        insertUtil(child, word.substr(1));
    }

    void insertWord(string word){
        insertUtil(root, word);
    }


    bool searchUtil(TrieNode* root, string word){
        //base case
        if(word.length() == 0){
            return root -> isTerminal;
        }

        int index = word[0] - 'A';
        TrieNode* child;

        //present
        if(root -> children[index] != NULL){
            child = root -> children[index];
        }

        //absent
        else{
            return false;
        }

        //RECURSION
        return searchUtil(child, word.substr(1));
    }

    bool searchWord(string word){
        return searchUtil(root, word);
    }

    bool hasChildren(TrieNode* node){
        for(int i = 0; i < 26; i++){
            if(node->children[i] != NULL){
                return true;
            }
        }
        return false;
    }

    // Recursive helper function for deletion
    bool removeUtil(TrieNode* root, string word){
        // Base case: reached end of word
        if(word.length() == 0){
            // Word doesn't exist in trie
            if(!root->isTerminal){
                return false;
            }
            
            // Mark as not terminal
            root->isTerminal = false;
            
            // Return true if node has no children (can be deleted)
            return !hasChildren(root);
        }

        int index = word[0] - 'A';
        
        // Character doesn't exist in trie
        if(root->children[index] == NULL){
            return false;
        }

        TrieNode* child = root->children[index];
        
        // Recursively delete from child
        bool shouldDeleteChild = removeUtil(child, word.substr(1));
        
        // If child should be deleted, remove the reference and delete the node
        if(shouldDeleteChild){
            delete child;
            root->children[index] = NULL;
            
            // Return true if current node can also be deleted
            // (not terminal and has no other children)
            return !root->isTerminal && !hasChildren(root);
        }
        
        return false;
    }

    void removeWord(string word){
        if(word.empty()){
            return;
        }
        removeUtil(root, word);
    }

};


int main(){

    Trie *t = new Trie();
    t -> insertWord("THIS");
    t -> insertWord("IS");
    t -> insertWord("PRAC");
    
    cout<<"present or not: "<<t -> searchWord("THIS")<<endl;
    cout<<"present or not: "<<t -> searchWord("IS")<<endl;
    cout<<"present or not: "<<t -> searchWord("PRA")<<endl;


    return 0;
}