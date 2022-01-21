//Function to enter an element into a linked list in front

#include<iostream>
using namespace std;

struct Node{
    int info; //info part of the node
    Node* next; //Pointer of type node pointing to the next element in the node
}*newptr, *ptr, *head; //Structure to define a node




//Function to create a new node with the info provided and return a pointer pointing to the new node created
Node* CreateNewNode(int data){
    ptr = new Node; //new node creation
    ptr->next = NULL; 
    ptr->info = data; 
    if(ptr==NULL){  //If there's no memory in free store(heap memory which is basically used for dynamic memory allocation)
        cout<<"No free space available in free store"<<endl;
        return ptr;
    }
    
    return ptr; //Return the node pointer pointing to the new element created
}



//function to push the element to the front of the linked list (takes in the newptr created by CreateNewNode as the arguement)
void PushFront(Node* np){
    if(head == NULL){
        head = np;
    }
    else{
        //Main logic to make the new connection when there is atleast one node present in the LinkedList
        np->next = head;
        head  = np;
    }
}

//function to push the element to the back of the linked list (takes in the newptr created by CreateNewNode as the arguement)
void PushBack(Node* np){
    if(head == NULL){
        head = np;
    }
    else{
        //Main logic to make the new connection when there is atleast one node present in the LinkedList
        Node* start = head;
        while(start->next!=NULL){
            start = start->next;
        }
        start->next  = np;
        np->next =NULL;
    }
}



void PopFront(Node* start){
    if(start==NULL){
        cout<<"LinkedList underflows";

    }
    else{
        Node* save = start;
        head = save->next;
        delete save;
    }

}

void PrintLinkedList(Node* start){
    if(start==NULL){
        cout<<"List is empty";
        return;
    }
    else{
        while(start!=NULL){
            cout<<start->info<<"->";
            start = start->next;
        }
    }

}

int main(){
    int d;
    head = NULL;
    char ch = 'y';
    while(ch=='y'){
     cout<<"Enter the data of the node to be inserted at the end"<<endl;
    cin>>d;


    Node* newptr = CreateNewNode(d); //New node creation
    PushBack(newptr);  //Pushing the new node created to the front 
    cout<<"Wanna enter more data y|n?";
    cin>>ch;
    }
    PrintLinkedList(head);

    PopFront(head);
    PrintLinkedList(head);

}