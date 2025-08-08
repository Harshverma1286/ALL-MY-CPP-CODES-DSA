#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

bool isprime(int n){
    if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}

int diagonalprime(vector<vector<int>>& nums){
    int n = nums.size();

    int mx =0;
    for(int i=0;i<n;i++){
        if(isprime(nums[i][i])){
            mx = max(mx,nums[i][i]);
        }
        if(isprime(nums[i][n-i-1])){
            mx = max(mx,nums[i][n-i-1]);
        }
    }
    return mx;
}

int main(){
    vector<vector<int>> nums = {{1,2,3},{5,6,7},{9,10,11}};

    cout<<diagonalprime(nums);
}