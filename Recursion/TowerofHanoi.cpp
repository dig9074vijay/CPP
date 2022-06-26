#include <iostream>
using namespace std;


void solve(int n, char a, char b, char c){
    if(n==1){
        cout<<"Disk "<<n<<" moved from "<<a<<" to "<<c<<endl;
        return;
    }
    
    solve(n-1,a,c,b);
    cout<<"Disk "<<n<<" moved from "<<a<<" to "<<c<<endl;
    solve(n-1,b,a,c);
}

int main() {
	int n;
	cin>>n;
	solve(n,'A','B','C');
	return 0;
}
