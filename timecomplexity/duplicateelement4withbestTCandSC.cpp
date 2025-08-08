#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n = 8;
    int arr[n]={6,3,2,4,1,7,1,5};

    int sum = 0;

    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int secondsum = (n-1)*(n-1+1)/2;

    int final = sum-secondsum;

    cout<<final;



}