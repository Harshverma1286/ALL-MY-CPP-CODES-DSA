#include<iostream>
#include<string>
using namespace std;

int binarytostring(string& str){
    int n = str.length();

    int result = 0;
    int count =0;

    for(int i=n-1;i>=0;i--){
        char ch = str[i];
        int num = ch-'0';
        result+= num*(1<<(count));
        count++;
    }

    return result;
}

int main(){
    string str = "001110110";

    cout<<binarytostring(str);
}