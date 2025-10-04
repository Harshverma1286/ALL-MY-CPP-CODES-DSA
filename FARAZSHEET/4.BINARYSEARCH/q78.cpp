#include<iostream>
#include<vector>
using namespace std;

int kthmissingnumber(vector<int>& arr,int k){
    int n = arr.size();
    int i =0;
    int count = 0;
    int current = 1;
    while(i<n){
        if(arr[i]!=current){
            count++;
            if(count==k) return current;
        }
        else{
            i++;
        }
        current++;
    }
    return arr[n-1]+(k-count);
}

int main(){
    vector<int> arr = {2,3,4,7,11};
    int k = 5;

    cout<<kthmissingnumber(arr,k);
}