#include<iostream>
#include<vector>
using namespace std;

int pivotindex(vector<int>& nums){
    int n = nums.size();
    int prevsum =0;
    for(int i=0;i<n;i++){
        prevsum+=nums[i];
    }
    int leftsum = 0;
    for(int i=0;i<n;i++){
        prevsum-=nums[i];
        if(leftsum==prevsum) return i;
        leftsum+=nums[i];
    }
    return -1;
}


int main(){
    vector<int> nums ={1,7,3,6,5,6};

    cout<<pivotindex(nums);
}