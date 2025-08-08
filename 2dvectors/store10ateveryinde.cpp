#include<iostream>
using namespace std;

int main(){
    int m = 5;

    int arr[m][m];

    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            arr[i][j]=10;
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}