// question  write a programe to add two numberss using pointers by taking inputs 
#include<iostream>
using namespace std;

int main(){
    int x;
    int y;
    int *p1 = &x;
    int *p2=&y;

    cout<<"enter the first number :";
    cin>>*p1;
    cout<<"enter the second number :";
    cin>>*p2;
    cout<<*p1+*p2;

}