#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;

bool check(vector<int>& candies,long long mid,long long k){
    long long n = candies.size();
    long long value = mid;
    long long count = 0;

    for(int i=0;i<candies.size();i++){
        if(candies[i]%value==0){
            count+=candies[i]/value;
        }
        else if(candies[i]%value!=0){
            count+=candies[i]/value;
        }
    }

    if(count>=k) return true;
    else return false;
}

int maximumcandies(vector<int>& candies,int k){
    long long n = candies.size();

    long long max = INT_MIN;

    for(int i=0;i<n;i++){
        if(max<candies[i]){
            max = candies[i];
        }
    }

    long long low = 0;
    long long high = max;
    long long ans =0;
    while(low<=high){
        long long mid =low+(high-low)/2;

        if(check(candies,mid,k)==true){
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return ans;
}

int main(){
    vector<int> candies = {5,8,6};
    int k = 3;

    cout<<maximumcandies(candies,k);
}