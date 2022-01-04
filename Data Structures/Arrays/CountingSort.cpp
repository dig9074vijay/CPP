
//O(N+Range)
#include<iostream>
#include<vector>
using namespace std;

void CountingSort(int a[],int n)
{
   int largest = -1;
   for(int i = 0;i<n;i++){
       largest = max(largest,a[i]);
   }

   vector<int> freq(largest+1,0);

   for(int i = 0;i<n;i++){
       freq[a[i]]++;
   }

    int j=0;
    for(int i=0;i<=largest;i++){
        while(freq[i]>0)
        {
            a[j] = i;
            freq[i]--;
            j++;
        }
    }
   
}

int main(){
    int arr[] = {2,3,4,1,5,12,6,1,3};
    int n  = sizeof(arr)/sizeof(int);
    //cout<<largestSubarraySum(arr,n);
    CountingSort(arr,n);
    for(int x : arr){
        cout<<x<<",";
    }
    return 0;
} 