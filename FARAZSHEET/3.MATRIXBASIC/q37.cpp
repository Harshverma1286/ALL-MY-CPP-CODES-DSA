#include<iostream>
using namespace std;

int main(){
    int m = 2;
    int n=2;
    int arr1[m][n] = {{1,2},{4,5}};
    int arr2[m][n] = {{1,2},{4,5}};
    int finaladd[m][n];
    int finalsub[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            finaladd[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            finalsub[i][j]=arr1[i][j]-arr2[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<finaladd[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<finalsub[i][j]<<" ";
        }
        cout<<endl;
    }
}