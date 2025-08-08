#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string str = "ab";

    int count=0;

    if(str.length()==0) count=0;
    for(int i=1;str[i]!='\0';i++){
        if(str.length()==2 && str[0]!=str[1]){
            count=1;
            break;
        }
        if(i==0){
            if(str[i]!=str[i+1]) count++;
        }
        else if(i==str.length()-1){
            if(str[i]!=str[i-1]) count++;
        }
        else if(str[i]!=str[i-1] && str[i]!=str[i+1]){
            count++;
        }
    }

    cout<<count;
}