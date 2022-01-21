#include<iostream>
#include<vector>
using namespace std;


void Merge(vector<int> &arr,int s,int e){
    int i = s;
    int m = (s+e)/2;
    int j = m+1;
    vector<int> temp;

    while(i<=m && j<=e){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i++]);
        }
        else{
            temp.push_back(arr[j++]);
        }
    }

    //To copy remaining elements
    while(i<=m){
        temp.push_back(arr[i++]);
    }

    while(j<= e){
        temp.push_back(arr[j++]);
    }

    int k = 0;
    for(int i = s;i<=e;i++){
        arr[i] = temp[k++];
    }
}

void MergeSort(vector<int> &arr,int s,int e){
    //base case
    if(s>=e){
        return;
    }
    //Recursive Case
    int mid  = (s+e)/2;
    MergeSort(arr,s,mid);
    MergeSort(arr,mid+1,e);
    Merge(arr,s,e);
}


int main(){

    vector<int> arr{2,0,7,3,4,12,9,5,6};
    int s = 0;
    int e = arr.size()-1;
    MergeSort(arr,s,e);
    for(int x : arr){
        cout<<x<<",";
    }
    return 0;
}