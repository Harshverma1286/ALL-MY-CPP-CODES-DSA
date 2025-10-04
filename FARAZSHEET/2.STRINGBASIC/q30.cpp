#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "it is a good day";
    int position =3;
    string ans ="";
    if(position>=str.length()){
        cout<<"invalid position";
        return 0;
    }
    for(int i=position;i<str.length();i++){
        char ch = str[i];
        ans+=ch;
        if(ch==' '){
            break;
        }
    }
    cout<<ans;
}