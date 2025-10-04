#include<iostream>
using namespace std;

void swaptwonumbers(int* x,int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}

int main(){
    int a = 5;
    int b = 4;
    swaptwonumbers(&a,&b);
    cout<<a<<" "<<b;
}