#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

bool check(vector<int>& piles,long long mid,int h){
    int value = mid;
    int count = 0;
    for(int i=0;i<piles.size();i++){
        if(value>=piles[i]) count++;
        else if(piles[i]%value==0){
            count+=piles[i]/value;
        }
        else{
            count+=piles[i]/value+1;
        }
    }
    if(count>h) return false;
    else return true;
}

int mineatingspeed(vector<int>& piles,int h){
    long long n = piles.size();

    long long max = INT_MIN;

    for(int i=0;i<n;i++){
        if(max<piles[i]){
            max = piles[i];
        }
    }
    long long low = 1;
    long long high = max;

    long long ans = 0;

    while(low<=high){
        long long mid = low+(high-low)/2;

        if(check(piles,mid,h)==true){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> piles = {3,6,7,11};

    int h = 8;

    cout<<mineatingspeed(piles,h);
}