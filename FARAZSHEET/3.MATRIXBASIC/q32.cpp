#include<iostream>
using namespace std;

int main(){
    int m = 4;
    int n = 4;
    int arr[m][n]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    cout<<"row printing : "<<" ";
    for(int i=0;i<m;i++){
        cout<<"row "<<i<<": "<<" ";
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"column printing : "<<" ";
    for(int j=0;j<n;j++){
        cout<<"column "<<j<<":"<<" ";
        for(int i=0;i<m;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}