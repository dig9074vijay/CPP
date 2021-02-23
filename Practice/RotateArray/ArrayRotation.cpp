
// Code to rotate an array in the right direction
// Approach 1 ( Complexity - O(nk) )
#include <bits/stdc++.h> 

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	long int num[100000],i, t, n, k,j;
	cin >> t;
	while(t--){
		cin >> n >> k;
		 k %= n;
		for(i=0;i<n;i++)
			cin >> num[i];
		for(i=0;i<k;i++){
			int l = num[n-1];
			for(j=n-2;j>=0;j--)
				num[j+1]=num[j];
			num[0] = l;	
		}
		for(i=0;i<n;i++)
			cout << num[i] << " ";
		cout<<"\n";	
	}	
	return 0;
}


