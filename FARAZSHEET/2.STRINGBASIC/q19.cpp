#include<iostream>
#include<string>

using namespace std;

int main(){
    string str = "abc123!@#";

    int letters = 0;
    int specialcharacter = 0;
    int numbers = 0;

    for(int i=0;i<str.length();i++){
        char ch = str[i];

        int ascii = (int)ch;

        if(ascii>=65 && ascii<=122){
            letters++;
        }
        else if(ascii>=48 && ascii<=57){
            numbers++;
        }
        else{
            specialcharacter++;
        }
    }

    cout<<numbers<<endl;
    cout<<letters<<endl;
    cout<<specialcharacter<<endl;
}