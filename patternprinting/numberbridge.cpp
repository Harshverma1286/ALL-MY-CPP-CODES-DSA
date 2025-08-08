#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=2*n-1;i++){
        cout<<i<<" ";
    }
    cout<<endl;

    for(int i=1;i<=n;i++){
        int val=1;
        for(int j=1;j<=n-i;j++){
            cout<<val<<" ";
            val++;
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<" "<<" ";
            val++;
        }
        for(int m=1;m<=n-i;m++){
            cout<<val<<" ";
            val++;
        }
        cout<<endl;
    }
}