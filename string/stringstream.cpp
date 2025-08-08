#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>

using namespace std;

int main(){
    string str = "harsh is a student at pw";

    stringstream ss(str);

    string temp;

    while(ss>>temp){
        cout<<temp<<endl;
    }
}