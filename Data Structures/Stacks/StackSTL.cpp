#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<int> s;
    s.push(1);
    s.push(9);
    s.push(7);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}