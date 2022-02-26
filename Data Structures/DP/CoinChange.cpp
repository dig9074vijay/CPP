#include<iostream>
#include<vector>
#include<climits>

using namespace std;


//Bottom Up Approach
int minNoOfCoinChange(int m, vector<int> coins){
    vector<int> dp(m+1,0);
    dp[0] = 0;
    for(int i =1;i<=m;i++){
        dp[i] = INT_MAX;
        for(int c: coins){
            if(i-c>=0 && dp[i-c]!=INT_MAX)
            dp[i] = min(dp[i],dp[i-c]+1);
        }
    }
    return dp[m]==INT_MAX? -1:dp[m];
}

int main(){
    vector<int> a = {1,5,7,10};
    int m = 5;
    cout<< minNoOfCoinChange(m,a);
}