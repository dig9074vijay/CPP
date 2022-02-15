#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int> &a,int s, int e){
    while(s<=e){
        swap(a[s],a[e]);
        s++;e--;
    }
}

int main(){

   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    bool isSorted= true, reversed=false;
    vector<int> a(n+1);
    for(int i = 1;i<n+1;i++){
        cin>>a[i];
        if(i!=a[i])
            isSorted = false;

    }
    if(isSorted){
        for(int i = 1;i<n+1;i++){
            cout<<a[i]<<" ";

        }
        cout<<endl;
        continue;
    }   
    for(int i = 1;i<n+1;i++){
        if(a[i]!=i)
            for(int j = i+1;j< n+1;j++){
                if(a[j]==i){
                    reverse(a,i,j);
                    reversed = true;
                    break;
                }
            }
            if(reversed==true)
                break;

    } 

    for(int i = 1;i<n+1;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

   }

}