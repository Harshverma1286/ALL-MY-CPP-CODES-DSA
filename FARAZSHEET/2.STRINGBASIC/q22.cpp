#include<iostream>
#include<string>
#include<sstream>
using namespace std;


int main(){
    string str ="  abc 123 !   ";

    int start = 0;

    while(start<str.length() && str[start]==' '){
        start++;
    }

    int end = str.length()-1;

    while(end>=0 && str[end]==' '){
        end--;
    }

    string cleaned = str.substr(start,end-start+1);

    stringstream s(cleaned);

    string temp;
    string word ="";

    while(s>>temp){
        if(!word.empty()){
            word+=" ";
        }
        word+=temp;
    }

    str = word;

    cout<<str;

    
}