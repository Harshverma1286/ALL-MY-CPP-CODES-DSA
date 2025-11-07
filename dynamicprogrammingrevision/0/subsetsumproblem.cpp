#include<iostream>
#include<vector>
using namespace std;

bool found = false;

void checkifsubsetsumexits(vector<int>& arr,int target,int i){
    if(found) return;
    if(target<0){
        return;
    }
    if(target==0){
        found = true;
        cout<<"yes subset sum is present";
        return;
    }
    if(i>=arr.size()){
        return;
    }
    int value = target-arr[i];
    checkifsubsetsumexits(arr,value,i+1);
    checkifsubsetsumexits(arr,target,i+1);
}

int main(){
    vector<int> arr = {2,3,7,8,10};

    int target = 12;

    int i = 0;

    checkifsubsetsumexits(arr,target,i);

    if(found==false){
        cout<<"no subset sum is not present";
    }
}