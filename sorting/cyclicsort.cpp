#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {5,1,3,4,2};

    int i=0;
    while(i<arr.size()){
        int correctidx = arr[i]-1;

        if(i==correctidx)i++;
        else swap(arr[i],arr[correctidx]);
    }

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}