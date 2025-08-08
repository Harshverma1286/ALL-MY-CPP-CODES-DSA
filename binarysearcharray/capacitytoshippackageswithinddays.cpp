#include<iostream>
#include<vector>
using namespace std;

bool check(int mid,vector<int>& weights,int days){
    int value = mid;
    int count = 1;
    for(int i=0;i<weights.size();i++){
        if(value>=weights[i]){
            value-=weights[i];
        }
        else{
            value=mid;
            count++;
            value-=weights[i];
        }
    }
    if(count>days) return false;
    else return true;

}

int shipwithindays(vector<int>& weights,int days){
    int n = weights.size();
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=weights[i];
    }
    int max =0;
    for(int i=0;i<n;i++){
        if(max<weights[i]){
            max = weights[i];
        }
    }
    int low = max;
    int high = sum;
    int ans = 0;

    while(low<=high){
        int mid = low+(high-low)/2;
        if(check(mid,weights,days)==true){
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
    vector<int> weights ={1,2,3,4,5,6,7,8,9,10};
    int days = 5;
    cout<<shipwithindays(weights,days);
}