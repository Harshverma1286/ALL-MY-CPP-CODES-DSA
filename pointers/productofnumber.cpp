#include<iostream>
using namespace std;

int product(int* ptr1,int* ptr2){
    return (*ptr1) * (*ptr2);
}

int main(){
    int firstnumber;
    cin>>firstnumber;
    int *ptr1 = &firstnumber;
    int secondnumber;
    cin>>secondnumber;
    int *ptr2 = &secondnumber;

    cout<<product(ptr1,ptr2);
}