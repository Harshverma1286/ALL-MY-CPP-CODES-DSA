#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    int y;
    cin>>y;
    int z;
    cin>>z;
    if(x>y && x>z){
        cout<<"x is greatest";
    }
    if(y>x && y>z){
        cout<<"y is greatest";
    }
    else{
        cout<<"z is greatest";
    }
}