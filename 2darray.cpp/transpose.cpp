#include<iostream>
using namespace std;

int main(){
    int arr[2][3]={1,2,3,4,5,6};
    int m = 2;
    int n = 3;
    int brr[n][m];


    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            brr[i][j]=arr[j][i];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}