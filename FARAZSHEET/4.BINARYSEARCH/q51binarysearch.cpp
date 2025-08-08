#include<iostream>
#include<vector>
using namespace std;

int specialarray(vector<int> nums){
    int low = 0;
    int high = nums.size();

    while(low<=high){
        int mid = low+(high-low)/2;

        int count = nums.end()-lower_bound(nums.begin(),nums.end(),mid);

        if(count==mid){
            return mid;
        }
        else if(count>mid){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {0,0,3,4,4};

    cout<<specialarray(nums);
}