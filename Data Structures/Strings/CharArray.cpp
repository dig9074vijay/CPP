#include<iostream>
using namespace std;

int main(){
    char str[100];
    cin>>str;
    cout<<str<<endl;
    //cin.get()
    char ch = cin.get();
    int len = 0;
    while(ch!='#'){
        str[len++] = ch;
        ch =  cin.get();
    }
    str[len]= '\0';
    cout<<str;
    //cin.getline()
    cin.getline(str,100,'#');
    cout<<str;
    
    return 0;

}