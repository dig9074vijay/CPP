#include<iostream>
#include<queue>
using namespace std;

//1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
//1 2 4 5 7 3 6  Preorder
//4 2 7 5 1 3 6  Inorder
//4 7 5 2 6 3 1 Postorder
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

void printInorderTree(Node* root){
    if(root==NULL){
        return;
    }


    printInorderTree(root->left);
        cout<<root->data<<" ";
    printInorderTree(root->right);

}

void printPostorderTree(Node* root){
    if(root==NULL){
        return;
    }


    printPostorderTree(root->left);
  
    printPostorderTree(root->right);
          cout<<root->data<<" ";

}

void printLevelOrder(Node* root){
    queue<Node*> p;
    p.push(root);
    p.push(NULL);
   
    while(!p.empty()){

    Node* temp = p.front();
    if(temp==NULL){
       
         cout<<"\n";
        p.pop();
        if(!p.empty())
        p.push(NULL);
       
    }
    else{
        p.pop();
        cout<<temp->data<<" ";
        if(temp->left!=NULL){
            p.push(temp->left);
        }
        if(temp->right!=NULL){
            p.push(temp->right);
        }
        
    }
    
    }
}


int TreeHeight(Node* root){
    if(root ==NULL){
        return 0;
    }

    int h1 = TreeHeight(root->left);
    int h2 = TreeHeight(root->right);
    return max(h1,h2) + 1;
}

int TreeDia(Node* root){
    if(root==NULL){
        return 0;
    }
    int d1 = TreeHeight(root->left) + TreeHeight(root->right);
    int d2 = TreeDia(root->left);
    int d3 = TreeDia(root->right);
   
    return max(d1,max(d2,d3));

}

int main(){

    Node* root;
    root = preOrderBuild();
    // printPreorderTree(root); // Root, Left, Right
    // cout<<endl;
    // printInorderTree(root);  // Left, Root, Right
    // cout<<endl;
    // printPostorderTree(root); //Left, Right, Root

    //  cout<<endl;
    // printLevelOrder(root); //Level wise
    cout<<endl;
    cout<<TreeHeight(root)<<endl;
    cout<<TreeDia(root);

}