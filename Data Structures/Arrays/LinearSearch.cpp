#include<iostream>
using namespace std;


int linear_search(int a[],int n,int key){
    for (int i = 0;i<n;i++){
        if(a[i]==key){
            return i;

        }
    }
    return -1;
}

int main()
{
    int a[] = {12,13,78,90};
    int n = sizeof(a)/sizeof(int);
    int key,index;
    cin>>key;
    index = linear_search(a,n,key);
    if(index!=-1){
        cout<<key<<" is present at index "<<index;
    }
    else
        cout<<"Element not found";
}