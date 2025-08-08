#include<iostream>
using namespace std;

int main(){
    int x = 5;
    int *p = &x;
    int y = 5;
    int *q = &y;
    cout<<*p+*q<<endl;
}