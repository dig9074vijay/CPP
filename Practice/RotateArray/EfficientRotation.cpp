
// Code to rotate an array in the right direction

#include <bits/stdc++.h> 

using namespace std;

void reverse(int a[], int low, int high){
	while(low<high){
	a[low] ^= a[high];
	a[high] ^= a[low];
	a[low] ^= a[high];
	low++;
	high--;
	}
}

int main() {
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	int num[100000],i, t, n, k,j;
	cin >> t;
	while(t--){
		cin >> n >> k;
		 k %= n;
		for(i=0;i<n;i++)
			cin >> num[i];
		reverse(num, 0, n-k-1);
		reverse(num, n-k, n-1);
		reverse(num, 0, n-1);
		for(i=0;i<n;i++)
			cout << num[i] << " ";
		cout<<"\n";	
	}	
	return 0;
}


