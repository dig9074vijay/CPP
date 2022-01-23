//Recursively enter the element at the bottom of the stack
#include<iostream>
#include<stack>

using namespace std;


void insertAtBottom(stack<int> &s,int d){

    //base case
    if(s.empty()){
        s.push(d);
        return;
    }
    //Recursive case
    int temp = s.top();
    s.pop();
    insertAtBottom(s,d);
    s.push(temp);

}

int main(){

    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    int data;
    cout<<"Enter the data to be entered at the bottom of the stack : ";
    cin>>data;

    insertAtBottom(s,data);

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}