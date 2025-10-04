#include<iostream>
using namespace std;

int main(){
    int arr[4][2] = {1,80,2,89,3,99,4,83};
    int m = 4;
    int n = 2;



    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}