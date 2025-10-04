#include<iostream>
using namespace std;

int main(){
    int m=3;

    int arr[m][m]={{1,2,3},{4,5,6},{7,8,9}};
    int brr[m][m]={{1,2,3},{4,5,6},{7,8,9}};


    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            arr[i][j] = arr[i][j]+brr[i][j];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}