#include<iostream>
#include<vector>
using namespace std;

int removeduplicates(vector<int>& nums){
    int i=0;
    int j = 1;
    while(j<nums.size()){
        if(nums[i]==nums[j]){
            j++;
        }
        else{
            i++;
            nums[i]=nums[j];
        }
    }
    return  i+1;
}

int main(){
    vector<int> nums ={1,1,2};
    
    cout<<removeduplicates(nums);
}