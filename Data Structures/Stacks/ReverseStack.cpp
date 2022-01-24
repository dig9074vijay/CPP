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

void reverseStack(stack<int> &s){
    //base case
    if(s.empty()){
        return;
    }

    //rec case
    int temp  = s.top();
    s.pop();
    reverseStack(s);
    insertAtBottom(s,temp);
}

int main(){

    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    

   reverseStack(s);

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}