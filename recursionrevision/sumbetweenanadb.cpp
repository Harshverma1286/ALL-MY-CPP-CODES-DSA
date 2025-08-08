#include<iostream>
using namespace std;

int sum(int a,int b){

    if(a>b) return 0;


    if(a%2==0){
        return sum(a+1,b);
    }
        return a+sum(a+2,b);
}

int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;

    cout<<sum(a,b);
}