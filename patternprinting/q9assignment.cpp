#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=2*n+1;i++){
        for(int j=1;j<=2*n+1;j++){
            if(i+j==n+2||j-i==n || i-j==n || i+j==n*3+2){
                cout<<"*"<<" ";
            }
            else if(i==n+1 || j==n+1){
                cout<<"*"<<" ";
            }
            else{
                cout<<" "<<" ";
            }
        }
        cout<<endl;
    }
}