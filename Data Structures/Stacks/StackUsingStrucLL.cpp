#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
}*newptr,*ptr,*save,*top;


Node* CreateNewNode(int d){
    newptr = new Node;
    newptr->data = d;
    newptr->next = NULL;
    return newptr;
}


void Push(Node* np){
    if(top == NULL){
        top = np;
    }
    else{
     np->next=top;
     top = np;
    }
}

void Display(Node* start){
    if(start==NULL){
        cout<<"Stack is empty";
        return;
    }
    else{
        while(start!=NULL){
            cout<<start->data<<endl;
            start = start->next;
        }
    }

}

int main(){
    top = NULL;
    int d;
    char ch = 'y';
    while(ch == 'y'){
        cout<<"Enter the data to be entered into the stack";
        cin>>d;
        newptr = CreateNewNode(d);
        Push(newptr);
        cout<<"Do you want to continue entering the numbers y|n";
        cin>>ch;
    }
    Display(top);
}