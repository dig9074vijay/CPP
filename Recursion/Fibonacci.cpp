//nth fibonacci using recursion
#include<iostream>
using namespace std;
// /*
// int fact(int a){
//     //base case
//     if(a==1||a==0)
//         return 1;
//     /*    
//     //recursive assumption    
//     int subprob = a * fact(a-1);
//     //self work
//     return subprob;
//     */
    
//     return a*fact(a-1);
// }
//   */
int fibo(int a){
    if(a == 0 || a == 1)
        return a;
    return fibo(a-1)+fibo(a-2);    
}

int main(){
    int n;
    cin>>n;
//    cout<<fact(n)<<"\n";
    cout<<fibo(n)<<"\n";
    return 0;
}
