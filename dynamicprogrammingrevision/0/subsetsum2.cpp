#include<iostream>
#include<vector>
using namespace std;


bool checksubsetsumpresent(vector<int>& arr,int target,int i){
    if(target==0){
        return true;
    }

    if(i>=arr.size()){
        return false;
    }

    if(target<0){
        return false;
    }

    bool take = checksubsetsumpresent(arr,target-arr[i],i+1);

    if(take==true) return true;

    bool leave = checksubsetsumpresent(arr,target,i+1);

    return leave;
}


int main(){
    vector<int> arr = {2,3,7,8,10};

    int i=0;

    int target = 11;

    if(checksubsetsumpresent(arr,target,i)==true){
        cout<<"yes subset sum is present";
    }
    else{
        cout<<"No subset sum is not present";
    }
}