#include<iostream>
#include<vector>
using namespace std;

int findduplicate(vector<int>& nums){
    int n = nums.size();

    int current;
    int actual;

    for(int i=0;i<n;i++){
        while(i+1!=nums[i]){
            current = nums[i];
            actual = current-1;

            if(nums[actual]==nums[i]){
                return nums[i];
            }

            swap(nums[actual],nums[i]);
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {1,3,4,2,2};

    cout<<findduplicate(nums);

}