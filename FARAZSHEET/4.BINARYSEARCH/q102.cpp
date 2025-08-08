#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

bool isvalid(vector<int>& ranks,long long mid,int cars){
    long long count = 0;
    long long value = mid;
    for(int i=0;i<ranks.size();i++){
        count+=sqrt(value/ranks[i]);
    }
    if(count>=cars) return true;
    else return false;
}

long long repaircars(vector<int>& ranks,int cars){
    long long low = 1;
    long long high = 1e14;
    long long ans = 0;

    while(low<=high){
        long long mid = low+(high-low)/2;
        if(isvalid(ranks,mid,cars)==true){
            ans = mid;
            high = mid-1;
        }
        else low = mid+1;
    }
    return ans;
}

int main(){
    vector<int> ranks = {4,2,3,1};
    int cars = 10;

    cout<<repaircars(ranks,cars);
}