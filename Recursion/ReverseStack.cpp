#include<iostream>
#include<stack>

using namespace std;

void insertu(stack<int> &s, int val){
    if(s.empty())
    {
        s.push(val);
        return;
    }

    int p = s.top();
    s.pop();
    insertu(s,val);    
    s.push(p);
}

void reverseu(stack<int> &s){
    if(s.size()==1)
        return;

    int val = s.top();
    s.pop();
    reverseu(s);
    insertu(s,val);   
}

int main(){
    int n;
    cin>>n;
    stack<int> s;

    for(int i = 0;i<n;i++){
        int p;
        cin>>p;
        s.push(p);
    }
    cout<<endl;
    reverseu(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    
}