#include<iostream>
using namespace std;

int main(){
    int m = 3;
    int n = 3;

    int arr[m][n] = {{1,0,0},{0,1,0},{0,0,1}};

    bool flag = true;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                if(arr[i][j]!=1){
                    flag = false;
                    break;
                }
            }
            else{
                if(arr[i][j]!=0){
                    flag = false;
                    break;
                }
            }
        }
    }

    if(flag==true){
        cout<<"it is an identity matrix";
    }
    else{
        cout<<"it is not an identity matrix";
    }
}