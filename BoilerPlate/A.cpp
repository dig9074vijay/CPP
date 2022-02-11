#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
    
	int t;
	cin >> t;
    while(t--){
        int n, k, a[1000],b[1000];
        cin>>n>>k;
        for(int i = 0 ;i<k;i++) cin>>a[i];
        for(int i = 0 ;i<k;i++) cin>>b[i];

        for(int j = 0 ;j<k;j++)
        for(int i = 0 ;i<k;i++){
            if(a[i]<=k){
                k += b[i];
            }
        }
        cout<<k<<endl;
        
    }
	
	return 0; 
} 