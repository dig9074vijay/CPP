#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	int A[1000][1000], i, j, t, n;
	cin >> t;
	while(t--)
	{
		cin>>n;
		for(i = 0;i < n;i++){
			for(j = 0;j < n;j++){
				cin>>A[i][j];
			}
		}
		for(i = 0;i < n;i++){
			for(j = 0;j < n;j++){
				cout<<A[i][j]<<" ";
			}
			cout<<"\n";
		}
	}
	return 0; 
}
