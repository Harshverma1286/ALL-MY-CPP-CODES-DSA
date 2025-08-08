#include<iostream>
#include<vector>
using namespace std;

int countways(int n,vector<int>& dp){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=6;j++){
            if(i-j>=0){
                dp[i]+=dp[i-j];
            }
        }
    }
    return dp[n];

}

int main(){
    int n = 6;
    vector<int> dp(n+1,0);
    dp[0] = 1;
    cout<<countways(n,dp);

}