#include<iostream>

using namespace std;

struct Node{
    int info;
    Node* left;
    Node* right;
}*root;

Node* Preorder(){
    int d;
    cin>>d;
    if(d == -1){
       return NULL;
    }
    
    Node* newptr = new Node;
    newptr->info = d;
    newptr->left = NULL;
    newptr->right =NULL;
    newptr->left = Preorder();
    newptr->right = Preorder();
    return newptr;
}

void PrintTree(Node* np){
    if(np == NULL){
        return;
    }
    cout<<np->info<<endl;
    PrintTree(np->left);
    PrintTree(np->right);
}

int main(){

    root = Preorder();
    PrintTree(root);
   
}