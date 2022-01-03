//Kadanes Algorithm
//O(n)
#include<iostream>
using namespace std;

int largestSubarraySum(int arr[],int n){
    int largestSum = 0;
    int cs =0;
    for(int i =0;i<n;i++){
        cs = cs + arr[i];
        if(cs<0)
            cs =0;
        largestSum = max(largestSum,cs);    
    }
    return largestSum;
}

int main(){
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n  = sizeof(arr)/sizeof(int);
 
    cout<<largestSubarraySum(arr,n);

    return 0;
} 