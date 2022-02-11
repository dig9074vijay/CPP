#include<iostream>
using namespace std;

//1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
//1 2 4 5 7 3 6
struct Node{
    int data;
    Node* left;
    Node* right;


   
    Node(int d){
        data = d;
        left=NULL;
        right=NULL;
    }
};

Node* preOrderBuild(){
    int d;
    cin>>d;
    if(d==-1){
        return NULL;
    }

    Node* ptr = new Node(d);
    ptr->left = preOrderBuild();
    ptr->right = preOrderBuild();
    return ptr;
}

void printPreorderTree(Node* root){
    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    printPreorderTree(root->left);
    printPreorderTree(root->right);

}

int main(){

    Node* root;
    root = preOrderBuild();
    printPreorderTree(root);
}