#include<iostream>
using namespace std;

int main(){
    int pi = 3.14;
    int radius;
    cout<<"enter the value of radius : ";
    cin>>radius;
    int height;
    cout<<"enter the value of height : ";
    cin>>height;
    int volume = pi*radius*radius*height;
    cout<<volume;
}