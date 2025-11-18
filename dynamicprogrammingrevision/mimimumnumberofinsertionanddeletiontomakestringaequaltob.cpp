#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    string a = "heap";
    string b = "pea";

    vector<vector<int>> dp(a.length()+1,vector<int>(b.length()+1,0));

    for(int i=1;i<a.length()+1;i++){
        for(int j=1;j<b.length()+1;j++){
            if(a[i-1]==b[j-1]){
                dp[i][j] = 1+dp[i-1][j-1];
            }
            else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }

    int deletion = a.length()-dp[a.length()][b.length()];
    int insertion = b.length()-dp[a.length()][b.length()];

    cout<<insertion<<" "<<deletion;

}