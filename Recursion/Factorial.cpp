//factorial of a given number using recursion
#include<iostream>
using namespace std;

int fact(int a){
    //base case
    if(a==1||a==0)
        return 1;
    /*    
    //recursive assumption    
    int subprob = a * fact(a-1);
    //self work
    return subprob;
    */
    
    return a*fact(a-1);
}


int main(){
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}
