#include<iostream>
using namespace std;


struct Node{
    int info ;
    Node* next;
}*newptr,*save,*ptr,*front,*rear;

Node* CreateNewNode(int data){
    ptr = new Node;
    ptr->info = data;
    ptr->next =NULL;
    return ptr;
}

void Push(Node* &rear, Node* &front, Node* np){
    if(rear == NULL){
        rear = front  = np;
    }
    else{
        rear->next = newptr;
        rear = newptr;
    }
}

void Pop(Node* &rear, Node* &front){
    if(front == NULL){
        cout<<"Empty";
    }
    else{
        save = front;
        front = front->next;
        delete front;
    }
}

int frontele(){
    return front->info;
}

int main(){
    rear =front =NULL;
    char ch = 'y';
    int d;
    while(ch=='y'){
        cout<<"Enter the data to be entered into the queue ";
        cin>>d;
        newptr = CreateNewNode(d);
        Push(front,rear,newptr);
        cout<<"Wanna enter more?";
        cin>>ch; 
    }
    while(front!=NULL ){
        cout<<frontele()<<endl;
        Pop(front,rear);
    }
}