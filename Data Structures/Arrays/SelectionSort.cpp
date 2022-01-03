
//O(N^2)
#include<iostream>
using namespace std;

void SelectionSort(int a[],int n){

    for(int i = 0; i<=n-2;i++){
        int minpos = i;
        for(int j = i;j<n;j++){
            if(a[minpos]>a[j]){
                minpos = j;
            }
        }
        swap(a[minpos],a[i]);    

    }

}
int main(){
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n  = sizeof(arr)/sizeof(int);
    //cout<<largestSubarraySum(arr,n);
    SelectionSort(arr,n);
    for(int x : arr){
        cout<<x<<",";
    }
    return 0;
} 