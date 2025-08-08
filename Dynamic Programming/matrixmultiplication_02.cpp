#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    vector<int> arr = {40,20,30,10,30};

    vector<vector<int>> dp(1005,vector<int>(1005,0));

    for(int len=2;len<arr.size();len++){
        for(int i=0;i+len<arr.size();i++){
            int j = i+len;
            dp[i][j] = INT_MAX;
            for(int k=i+1;k<j;k++){
                dp[i][j] = min(dp[i][j],dp[i][k]+dp[k][j]+arr[i]*arr[k]*arr[j]);
            }
        }
    }
    cout<<dp[0][arr.size()-1];
}

