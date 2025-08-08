#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number of rows : ";
    cin>>n;
    int m;
    cout<<"enter the number of columns : ";
    cin>>m;
       int mid = n/2+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(mid==i || mid==j){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
         
        }
        cout<<endl;
    }
}