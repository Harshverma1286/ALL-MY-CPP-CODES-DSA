#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    int c;
    cin>>c;

    if(a+b>c){
        cout<<"it can be the side of a triangle";
    }
    else if(b+c>a){
        cout<<"it can be the side of a triangle";
    }
    else if(c+a>b){
        cout<<"it can be the side of a triangle";
    }
    else{
        cout<<"it cannot be the side of a triangle";
    }
}