#include<iostream>
using namespace std;


struct Node{
    int info ;
    Node* next;
}*newptr,*ptr,*front,*rear;

Node* CreateNewNode(int data){
    ptr = new Node;
    ptr->info = data;
    ptr->next =NULL;
    return ptr;
}

void Push(Node* np){
    if(rear == NULL){
        rear = np;
        front  = np;
    }
    else{
        rear->next = newptr;
        rear = newptr;
    }
}

void Pop(){
    if(front == NULL){
        cout<<"Empty";
    }
    else{
        
        ptr = front;
        front = front->next;
        delete ptr;
       // cout<<"Inside POP 2";
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
        Push(newptr);
        cout<<"Wanna enter more?";
        cin>>ch; 
    }
    while(front!=NULL ){
        cout<<frontele()<<endl;
        Pop();
    }
}