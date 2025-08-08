#include<iostream>
using namespace std;

int main(){
    int n = 24;

    int temp = n;

    temp = (temp | temp>>1);
    temp = (temp | temp>>2);
    temp = (temp | temp>>4);
    temp = (temp | temp>>8);
    temp = (temp | temp>>16);

    cout<< (n ^ temp);

}