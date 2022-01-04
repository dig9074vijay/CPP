#include<iostream>
using namespace std;


string runLengthEncoding(string str){
    int n = str.length();
    string outStr;
    for(int i = 0;i<n;i++){
        int count =1;
        while(i<n-1 and str[i]==str[i+1]){
            i++;
            count++;
        }
        outStr += str[i];
        outStr += to_string(count);
    }
    if(str.length() > outStr.length())
    return outStr;
    else
    return str;
}

int main(){
    string s1="aaabbccccdd",s2="abcd";
    getline(cin,s1);
    cout<<runLengthEncoding(s1)<<endl;
    cout<<runLengthEncoding(s2)<<endl;
    return 0;
}