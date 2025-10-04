#include<iostream>
using namespace std;

int main(){
    int m = 3;
    int n = 3;
    int arr[m][n] ={{1,2,3},{4,5,6},{7,8,9}};

    int final[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                final[i][j]=arr[i][j];
            }
            else if(i+j==n-1){
                final[i][j]=arr[i][j];
            }
            else{
                final[i][j] = 0;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<final[i][j]<<" ";
        }
        cout<<endl;
    }

}