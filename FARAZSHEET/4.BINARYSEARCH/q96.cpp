#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;

bool check(vector<int>& stalls,int mid,int k){
    int n = stalls.size();
    int value = mid;
    int count = 1;
    int firstposition = stalls[0];
    for(int i=1;i<n;i++){
        if(stalls[i]-firstposition>=mid){
            count++;
            firstposition = stalls[i];
            if(count==k) return true;
        }
    }
    return false;
}
int aggressivecows(vector<int>& stalls,int k){
    sort(stalls.begin(),stalls.end());
    int n = stalls.size();

    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(max<stalls[i]){
            max = stalls[i];
        }
    }
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(min>stalls[i]){
            min = stalls[i];
        }
    }
    int low =1;
    int high = max-min;
    int ans = -1;

    while(low<=high){
        int mid = low+(high-low)/2;
        if(check(stalls,mid,k)==true){
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
    vector<int> stalls = {1,2,4,8,9};
    int k = 3;

    cout<<aggressivecows(stalls,k);
}