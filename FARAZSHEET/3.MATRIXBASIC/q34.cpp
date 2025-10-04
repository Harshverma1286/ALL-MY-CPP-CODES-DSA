#include<iostream>
using namespace std;

int main(){
    int m = 2;
    int n = 2;
    int arr[m][n]={{1,2},{3,4}};

    int sum =0;
    cout<<"row sum printing : "<<" ";
    cout<<endl;
    for(int i=0;i<m;i++){
        sum=0;
        for(int j=0;j<n;j++){
            sum+=arr[i][j];
        }
        cout<<"row "<<i<<" sum is "<<" "<<sum<<endl;
    }
    cout<<endl;
    cout<<"column sum printing : "<<" ";
    cout<<endl;
    for(int j=0;j<n;j++){
        sum=0;
        for(int i=0;i<m;i++){
            sum+=arr[i][j];
        }
        cout<<"column "<<j<<" sum is "<<" "<<sum<<endl;
    }
}