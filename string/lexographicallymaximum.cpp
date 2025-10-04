#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    string str;
    getline(cin,str);

    int n = str.size();

    string mx = "";
    string word ="";

    for(int i=0;i<n;i++){
        if(str[i]==' '){
            mx = max(mx,word);
            word =""; 
        }
        else{
            word+=str[i];
        }

    }

    mx = max(mx,word);
    cout<<mx;



}