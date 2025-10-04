#include<iostream>
using namespace std;

int main(){
    int x=15;
    int *ptr=&x;
    // int y=++(*ptr);
    int y=(*ptr)++;
    cout<<x<<" "<<y;

}