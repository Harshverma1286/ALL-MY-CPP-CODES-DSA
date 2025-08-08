#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main(){
    string str = "harsh wants to be the best";

    stringstream s(str);

    string temp;

    int count=0;

    while(s>>temp){
        count++;
    }

    cout<<count;
}