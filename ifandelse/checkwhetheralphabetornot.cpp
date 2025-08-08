#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    int val = (int)ch;
    //cout<<val;
    //if(val<65)
    if(val>64 && val<91 || val>96 && val<123){
        cout<<"the character is an alphabet";
    }
    else{
        cout<<"the character is not an alphabet";
    }
}