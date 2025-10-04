#include<iostream>
using namespace std;

int main(){
    int m = 3;

    int arr[m][m]={{1,2,3},{4,5,6},{7,8,9}};

    for(int j=m-1;j>=0;j--){
        for(int i=0;i<m;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}