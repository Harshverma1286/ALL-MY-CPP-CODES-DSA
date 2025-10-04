#include<iostream>
using namespace std;

void firstandlast(int n ,int* x,int* y){
    *y = n%10;
    while(n>9){
        n/=10;
    }
    *x = n;
    return;

}


int main(){

    int n;
    cin>>n;
    int firstdigit;
    int lastdigit;

    int *x = &firstdigit;
    int *y = &lastdigit;

    firstandlast(n,x,y);
    cout<<firstdigit<<" "<<lastdigit;
}