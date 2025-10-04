#include<iostream>
using namespace std;

int reversenumber(int n,int number){
    if(n==0){
        return number;
    }
    int digits = n%10;

    number = (number*10)+digits;
    n=n/10;
    return reversenumber(n,number);
}

int main(){
    int n = 12030;
    int number = 0;
    number = reversenumber(n,number);
    cout<<number;
}