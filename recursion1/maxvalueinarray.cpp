#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void maxvalueofarray(vector<int>& arr,int i,int& maxvalue){
    if(i>=arr.size()){
        cout<<maxvalue;
        return;
    }
    if(maxvalue<=arr[i]) maxvalue = arr[i];
    maxvalueofarray(arr,i+1,maxvalue);
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    int maxvalue = INT_MIN;
    maxvalueofarray(arr,0,maxvalue);
}