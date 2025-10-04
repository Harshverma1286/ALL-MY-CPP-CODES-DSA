#include<iostream>
using namespace std;

int main(){
    int m = 3;
    int n = 3;

    int arr[m][n] = {{4,2,7},{1,9,5},{8,6,3}};
    for(int i=0;i<m;i++){
        for(int j=0;j<n-1;j++){
            for(int k=0;k<n-j-1;k++){
                if(arr[i][k]>arr[i][k+1]){
                    swap(arr[i][k],arr[i][k+1]);
                }
            }
        }
    }

    for(int j=0;j<n;j++){
        for(int i=0;i<m-1;i++){
            for(int k=0;k<m-i-1;k++){
                if(arr[k][j]>arr[k+1][j]){
                    swap(arr[k][j],arr[k+1][j]);
                }
            }
        }
    }


    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}