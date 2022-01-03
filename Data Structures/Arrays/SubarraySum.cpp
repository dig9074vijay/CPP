//bruteforce approach
//O(N^3)
#include<iostream>
using namespace std;

int largestSubarraySum(int arr[],int n){
    int largestSum = 0;
    for (int i = 0;i<n;i++){
        for(int j=i;j<n;j++){
            int currentSum = 0;
            for(int k=i ;k<j;k++){
                currentSum+=arr[k];
            }
            largestSum = max(largestSum,currentSum);
        }
    }
    return largestSum;
}


int main(){
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n  = sizeof(arr)/sizeof(int);
    cout<<largestSubarraySum(arr,n);
    return 0;
} 