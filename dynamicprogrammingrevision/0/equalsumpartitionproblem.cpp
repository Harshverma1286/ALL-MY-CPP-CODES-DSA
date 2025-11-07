#include<iostream>
#include<vector>
using namespace std;

bool equalsumpartiiton(vector<int>& arr,int sum,int i){
    if(i<0 || sum<0) return false;

    if(sum==0) return true;

    if(arr[i-1]<=sum){
        return equalsumpartiiton(arr,sum-arr[i],i-1) || equalsumpartiiton(arr,sum,i-1);
    }
    else{
        return equalsumpartiiton(arr,sum,i-1);
    }
}

int main(){
    vector<int> arr = {1,5,11,5};

    int sum = 0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
    }

    int halfofsum = sum/2;

    int i = arr.size();

    if(equalsumpartiiton(arr,halfofsum,i)){
        cout<<"Yes it can be partitioned";
    }
    else{
        cout<<"No it cant be partitioned";
    }
}