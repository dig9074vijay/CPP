//Program to reverse an array
#include<iostream>
using namespace std;

int main(){
    int a[20],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int high , low;
    high=n-1;low=0;
    while(low<high){
        a[low] ^= a[high];
        a[high] ^= a[low];
        a[low] ^= a[high];
        low++;
        high--;

    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    return 0;
}
