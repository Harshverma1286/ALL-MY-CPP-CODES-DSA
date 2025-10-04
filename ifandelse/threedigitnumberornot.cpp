#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    if(x>99 && x<=999){
        cout<<"it is a three digit number";
    }
    else{
        cout<<"not a three digit number";
    }
}