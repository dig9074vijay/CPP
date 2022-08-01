
#include<bits/stdc++.h>

using namespace std;


void solve(vector<int> &ds, int arr[], int i,int n){
    if(i==n)
    {
        for(auto it: ds){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }

     solve(ds,arr,i+1,n);

    ds.push_back(arr[i]);
    solve(ds,arr,i+1,n);
    ds.pop_back();
   

}


int main(){
    int arr[] = {3,1,2};

    int n =3;
    vector<int> ds;
    solve(ds,arr,0,n);
    return 0;
}