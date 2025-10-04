#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"enter the first value : ";
    cin>>x;
    int y;
    cout<<"enter the second value : ";
    cin>>y;
    char ch;
    cout<<"enter the operator (+,-,*,/) : ";
    cin>>ch;

    switch(ch){
        case '+':
        cout<<x+y;
        break;
        case '-':
        cout<<x-y;
        break;
        case '*':
        cout<<x*y;
        break;
        case '/':
        cout<<x/y;
        break;
        default:
        cout<<"invalid operator";
        break;
    }
}