#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    int val = (int)ch;
    //cout<<val;
    //if(val<65)
    if( val>96 && val<123){
       if(val==97 ||val==101|| val==105 || val==111 || val==117){
        cout<<"it is a vowel";
       }
       else{
        cout<<"it is a consonant";
       }
       
    }
    else{
        cout<<"the character is not an alphabet";
    }
}