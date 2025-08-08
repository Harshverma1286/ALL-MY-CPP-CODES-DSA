#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

vector<int> getdigit(int n){
  vector<int> dig;
  while(n>0){
  if(n%10!=0){
    dig.push_back(n%10);
  }
  n=n/10;
  }
  return dig;

}
vector<int> dp;

int helper(int n){
    if(n==0) return 0;
    if(n<=9) return 1;

    if(dp[n]!=-1) return dp[n];

    vector<int> digits = getdigit(n);

    int result = INT_MAX;

    for(int i=0;i<digits.size();i++){
        result = min(result,helper(n-digits[i]));
    }
    dp[n]= 1+result;
    return dp[n];
}

// int solve(int n){
//     dp[0] = 0;
//     for(int i=1;i<=9;i++){
//         dp[i]=1;
//     }


//     for(int j = 10;j<=n;j++){

//         int ans = INT_MAX;

//      vector<int> digits = getdigit(n);

//      for(int k=0;k<digits.size();k++){
//         ans = min(ans,dp[n-digits[k]]);
//      }
     
//     dp[n] = 1+ ans;

//     }

//     return dp[n];
// }

int main(){
    int n;
    cin>>n;
    dp.resize(10000005,-1);

    

    cout<<helper(n);

}