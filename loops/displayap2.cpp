#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a=100;
    for(int i=1;i<=n;i++){
        if(a>0){
        cout<<a<<endl;
        }
        a-=3;
    }
}