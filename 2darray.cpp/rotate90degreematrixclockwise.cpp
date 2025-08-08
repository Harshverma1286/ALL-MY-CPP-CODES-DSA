#include<iostream>
using namespace std;

int main(){
    int m = 3;

    int arr[m][m] = {{1,2,3},{4,5,6},{7,8,9}};

    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            int temp=arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
            if(j==i) break;
        }
    }



    for(int i=0;i<=m-1;i++){
        for(int j=m-1;j>=0;j--){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}