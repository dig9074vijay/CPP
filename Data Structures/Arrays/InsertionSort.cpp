
//O(N^2)
#include<iostream>
using namespace std;

void InsertionSort(int a[],int n){

    for(int times = 1; times<=n-1;times++){
        int current = a[times];
        int prev = times-1;
        while(prev>=0 && a[prev]>current ){
            a[prev+1] = a[prev];
            prev = prev-1;
        }
        a[prev+1] = current;
    }

}
int main(){
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n  = sizeof(arr)/sizeof(int);
    //cout<<largestSubarraySum(arr,n);
    InsertionSort(arr,n);
    for(int x : arr){
        cout<<x<<",";
    }
    return 0;
} 