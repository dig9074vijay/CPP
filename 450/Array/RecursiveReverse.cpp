#include<iostream>
using namespace std;

void ReverseArray(int a[],int start, int end){
    
    if(start>end)
        return;
    
    swap(a[start],a[end]);
    ReverseArray(a,start+1,end-1);
}

int main(){
    int arr[] = {5,4,1,2,17};
    int n = sizeof(arr)/sizeof(int);
    ReverseArray(arr,0,n-1);
    for(int x : arr){
        cout<<x<<",";
    }
    return 0;
}