#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "helo";

    bool flag = false;

    for(int i=1;i<str.length();i++){
        if(str[i]==str[i-1]){
            flag = true;
            break;
        }
    }
    if(flag ==true){
        cout<<"yes it contain two or three identical characters";
    }
    else{
        cout<<"no it does not contain identical characters";
    }
}