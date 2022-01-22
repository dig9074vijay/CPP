#include<iostream>
using namespace std;

void Push(int arr[],int &top,int data){

        top++;
        arr[top] = data;
}

void Display(int arr[],int top){
    for(int i = top;i>=0;i--){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int top = -1,stack[1000];
    int d;
    char ch = 'y';
    while(ch == 'y'){
        cout<<"Enter the data to be entered into the stack";
        cin>>d;
        
        Push(stack,top,d);
        cout<<"Do you want to continue entering the numbers y|n";
        cin>>ch;
    }
    Display(stack,top);
}