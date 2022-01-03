#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n, int key){
    int mid,s,e;
    s = 0;
    e = n-1;
   
    while(s<=e)
    {
        mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {23,32,48,67,70,75,81,84,98};
    int n  = sizeof(arr)/sizeof(n);
    int key;
    cin>>key;
    int index = BinarySearch(arr,n,key);
    if(index!=-1){
        cout<<key<<" is present at index "<<index;
    }
    else
        cout<<"Element not found";
    return 0;
}