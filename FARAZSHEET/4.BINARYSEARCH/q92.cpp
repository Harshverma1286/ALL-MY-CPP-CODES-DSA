#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

bool check(vector<int>& weights,int mid,int days){
    int count =1;
    int value = mid;
    for(int i=0;i<weights.size();i++){
        if(weights[i]<=value){
            value-=weights[i];
        }
        else{
            count++;
            value = mid;
            value-=weights[i];
        }
    }
    if(count>days) return false;
    return true;
}

int shipwithindays(vector<int>& weights,int days){
    int n = weights.size();
    int max = INT_MIN;
    for(int i=0;i<weights.size();i++){
        if(max<weights[i]){
            max = weights[i];
        }
    }
    int sum = 0;
    for(int i=0;i<weights.size();i++){
        sum+=weights[i];
    }
    int low = max;
    int high = sum;
    int ans =0;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(check(weights,mid,days)==true){
            ans = mid;
            high = mid-1;
        }
        else low = mid+1;
    }
    return ans;
}

int main(){
    vector<int> weights = {1,2,3,4,5,6,7,8,9,10};
    int days = 5;

    cout<<shipwithindays(weights,days);
}