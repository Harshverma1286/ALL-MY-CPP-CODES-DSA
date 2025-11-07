#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {2,3,7,8,10};

    int target = 110;

    vector<vector<int>> dp(arr.size()+1,vector<int>(target+1,false));

    for(int i=0;i<dp.size();i++){
        dp[i][0] = true;
    }

    for(int i=1;i<arr.size()+1;i++){
        for(int j=1;j<target+1;j++){
            if(arr[i-1]<=j){
                dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    if(dp[arr.size()][target]==true) cout<<"yes subset sum exits";
    else cout<<"subset sum does not exits";
}