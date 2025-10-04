#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "abcde";

    bool flag = true;

    int i=0;
    int j = str.length()-1;

    while(i<j){
        if(str[i]!=str[j]){
            flag = false;
            break;
        }
        i++;
        j--;
    }

    if(flag==true){
        cout<<"it is a palindrome string";
    }
    else{
        cout<<"it is not a palindrome string";
    }
}