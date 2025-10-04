#include<iostream>
using namespace std;

void palindrome(string str,int first,int second){
     if(str[first]!=str[second]){
        cout<<"it is not a palindrome";
        return;
    }
    if(first>second){
        cout<<"it is a palindrome";
        return;
    }
    palindrome(str,first+1,second-1);
}

int main(){
    string str = "aba";
    palindrome(str,0,str.length()-1);
}