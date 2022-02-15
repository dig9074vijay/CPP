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


Node* finMin(Node* root){
    while(root->left != NULL){
        root = root->left;
    }
    return root;
}

Node* remove(Node* root,int key){
    if(root==NULL){
        return NULL;
    }
    // Searching for the node with value equal to key
    else if(key<root->val){
        root->left = remove(root->left,key);
    }
    else if(key>root->val){
        root->right = remove(root->right,key);
    }
    //
    else{
        //With 0 child (Leaf Node)
        if(root->left == NULL && root->right == NULL){
            delete root;
            root = NULL;
        }
    

        //With 1 child

        else if( root->left ==NULL){
            Node* temp  = root;
            root = root->right;
            delete temp;
        }
        else if( root->right ==NULL){
            Node* temp  = root;
            root = root->left;
            delete temp;
        }
        //With 2 children
        else{
            Node* temp  =  finMin(root->right);
            root->val = temp->val;
            root->right = remove(root->right,temp->val);
        }
    }
    return root;
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
    root  = remove(root,key);
     printBST(root);

}