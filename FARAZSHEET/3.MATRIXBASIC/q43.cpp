#include<iostream>
using namespace std;

int main(){
    int m = 3;
    int n = 3;

    int arr[m][n] = {{1,2,3},{4,5,6},{7,8,9}};

    int transpose[m][n];

    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            transpose[j][i] = arr[i][j];
        }
    }

    bool flag = true;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(transpose[i][j]!=arr[i][j]){
                flag = false;
                break;
            }
        }
    }

    if(flag == false){
        cout<<"matrix is not symmetric";
    }
    else{
        cout<<"matrix is symmetric";
    }
}