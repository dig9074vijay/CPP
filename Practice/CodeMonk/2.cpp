//Program to count the number of inversions

#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	int A[1000][1000], i, j, t, n, z, cnt, l, m;
	cin >> t;
	while(t--)
	{
		cnt = 0;
		cin>>n;
		for(i = 0;i < n;i++){
			for(j = 0;j < n;j++){
				cin>>A[i][j];
			}
		}
		for(i = 0;i < n;i++){
			for(j = 0;j < n;j++){
				z = A[i][j];
				for(l = i;l < n;l++){
					for(m = j;m < n;m++){
						if(z > A[l][m])
							cnt++;
					}
				}
			}
		}
		cout<<cnt<<"\n";
	}
	return 0; 
}
