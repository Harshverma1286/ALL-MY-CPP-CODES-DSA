#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int matrixmultiplication(vector<int>& arr,int i,int j,vector<vector<int>>& dp){
    if(i==j || i+1==j) return 0;

    if(dp[i][j]!=-1) return dp[i][j];

    int ans = INT_MAX;
    for(int k=i+1;k<j;k++){
        ans = min(ans,matrixmultiplication(arr,i,k,dp) + matrixmultiplication(arr,k,j,dp)+arr[i]*arr[j]*arr[k]);
    }

    return dp[i][j] = ans;
}

int main(){
    vector<int> arr = {40,20,30,10,30};

    vector<vector<int>> dp(1004,vector<int>(1004,-1));

    int i = 0;
    int j = arr.size()-1;

    cout<<matrixmultiplication(arr,i,j,dp);
}