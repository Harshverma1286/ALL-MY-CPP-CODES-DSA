#include<iostream>
using namespace std;

int main(){
    int m = 4;

    int arr[m][m] = {{1,3,4,6},{2,4,5,7},{3,5,6,8},{4,6,7,9}};


    int max = arr[0][0];

    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(max<arr[i][j]){
                max = arr[i][j];
            }
        }
    }
    cout<<max;
}