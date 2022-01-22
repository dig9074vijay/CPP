#include<iostream>
#include "StackLL.h"
using namespace std;

int main(){

    Stack<char> s;
    s.Push('h');
    s.Push('e');
    s.Push('l');
    s.Push('l');
    s.Push('o');
 
    while(!s.empty()){
        cout<<s.Top()<<endl;
        s.Pop();
    }
    
} 
 