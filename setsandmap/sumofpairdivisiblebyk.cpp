#include<iostream>
#include<unordered_map>
using namespace std;

int pairs(int arr[],int n , int k){
    unordered_map<int,int> mp;

    if(n & 1){
        return false;
    }

    for(int i=0;i<n;i++){
        mp[arr[i]%k]++;
    }

    for(int i=0;i<n;i++){
        int rem = (arr[i]%k);
    

    if(2*rem==k){
        if(mp[rem]%2!=0){
            return false;
        }
    }
    else if(rem==0){
        if(mp[rem] & 1){
            return false;
        }
    }
    else if(mp[rem]!=mp[k-rem]){
        return false;
    }
    }
    return true;
}

int main(){
    int arr[] ={2,5,6,5,8,3};
    int k = 5;
    int n = sizeof(arr)/sizeof(arr[0]);
    int value = pairs(arr,n,k);
    if(value==true){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

}