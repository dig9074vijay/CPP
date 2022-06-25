#include<iostream>
#include<vector>

using namespace std;

void insertu(vector<int> &arr, int val){
    if((int)arr.size()==0   || arr[arr.size()-1]<=val)
    {
        arr.push_back(val);
        return;
    }

    int p = arr[arr.size()-1];
    arr.pop_back();
    insertu(arr,val);    
    arr.push_back(p);
}

void sortu(vector<int> &arr){
    if(arr.size()==1)
        return;

    int val = arr[arr.size()-1];
    arr.pop_back();
    sortu(arr);
    insertu(arr,val);   
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sortu(arr);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}