#include<iostream>
#include<vector>
using namespace std;

int findduplicate(vector<int>& arr){
    int n = arr.size();
    int current;
    int actual;

    vector<int> nums(n,0);

    for(int i=0;i<n;i++){
        current = arr[i];
        actual = (current%n)-1;
        if(nums[actual]==0){
            nums[actual] = arr[i];
        }
        else if(nums[actual]!=0){
            return arr[i];
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {1,3,4,2,2};

    cout<<findduplicate(nums);
}