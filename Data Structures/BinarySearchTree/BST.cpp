#include<iostream>
using namespace std;


struct Node{
    int val;
    Node* left;
    Node* right;
    Node(int v):val(v),left(NULL),right(NULL){}
};



Node* insert(Node* root, int key){
    if(root==NULL)
        return new Node(key);

    if(key<root->val){
        root->left = insert(root->left,key);
    }
    else{
        root->right = insert(root->right,key);
    }

    return root;    
}

void printBST(Node* root){
    if(root==NULL)
        return;


    printBST(root->left);
    cout<<root->val<<" ";
    printBST(root->right);    
}

bool search(Node* root,int key){
    if(root==NULL){
        return false;
    }
    if(key== root->val){
        return true;
    }
    if(key< root->val){
        return search(root->left,key);
    }
  
        return search(root->right,key);
}

int main(){
    Node* root = NULL;
    int a[] = { 8,3,10,1,6,14,4,7,12 };
    for(int x : a){
        root = insert(root,x);
    }

    printBST(root);
    int key;
    cin>>key;
    cout<<search(root,key);

}