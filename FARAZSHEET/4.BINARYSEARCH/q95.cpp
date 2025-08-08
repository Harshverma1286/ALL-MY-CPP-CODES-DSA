#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

bool check(vector<int>& bloomday,int mid,int m,int k){
    int value = mid;
    int adjacent = k;
    int count =0;
    for(int i=0;i<bloomday.size();i++){
        if(bloomday[i]<=value){
            adjacent--;
            if(adjacent==0){
                count++;
                adjacent = k;
            }
        }
        else if(bloomday[i]>value){
            adjacent = k;
        }
    }
    if(count<m) return false;
    else return true;
}

int mindays(vector<int>& bloomday,int m,int k){
    int n = bloomday.size();
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(max<bloomday[i]){
            max = bloomday[i];
        }
    }
    int low = 1;
    int high = max;
    int ans = -1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(check(bloomday,mid,m,k)==true){
            ans = mid;
            high = mid-1;
        }
        else low = mid+1;
    }
    return ans;
}

int main(){
    vector<int> bloomday = {1,10,3,10,2};
    int m = 3;
    int k = 1;

    cout<<mindays(bloomday,m,k);
}