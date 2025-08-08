#include<iostream>
using namespace std;

int main(){
    int m = 3;
    int n = 4;

    int arr[m][n] = {{1,3,5,7},{3,4,7,8},{1,4,12,3}};

    int val = 0;
    int idx = 0;
    for(int i=0;i<m;i++){
        int maxsum = 0;
        for(int j=0;j<n;j++){
            maxsum+=arr[i][j];
        }
        if(val<maxsum){
            idx = i;
        }
    }
    cout<<idx;
}