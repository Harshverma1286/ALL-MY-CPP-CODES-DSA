#include<iostream>
using namespace std;

int main(){
    int x=7;
    int *ptr=&x;
    cout<<*ptr<<endl;;
    ptr=ptr+1;
    cout<<ptr<<endl;;
    cout<<*ptr;
//so depending on the datatype pointers are increasing by the size of the datatype

}