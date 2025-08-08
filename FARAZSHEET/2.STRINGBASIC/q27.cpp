#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "hello everyone";

    bool flag = true;

    int arr[256] ={0};

    for(int i=0;i<str.length();i++){
        char ch = str[i];
        int ascii = (int)ch;
        if(ch==' '){
            continue;
        }
        else if(arr[ascii]==0){
            arr[ascii]=1;
        }
    }

    for(int i=97;i<=122;i++){
        if(arr[i]==0){
            flag = false;
            break;
        }
    }
    if(flag==true){
        cout<<"it contains all the character from a to z";
    }
    else{
        cout<<"it does not contain all the characters from a to z";
    }


}