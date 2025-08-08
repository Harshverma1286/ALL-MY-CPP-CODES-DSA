#include<iostream>
#include<string>
using namespace std;

void printwithouta(string ans,string str,int idx){
    if(str.length()==idx){
        cout<<ans;
        return;
    }

    char ch = str[idx];

    if(ch=='a') printwithouta(ans,str,idx+1);
    else printwithouta(ans+ch,str,idx+1);
}

int main(){
    string str = "raghav garg";

    printwithouta("",str,0);


}