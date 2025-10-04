#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    bool flag = true;
    string s = "car";
    string t = "arc";

    if(s.length()!=t.length()){
        flag = false;
        cout<<"false";
        return 0;
    }

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    for(int i=0;i<t.length();i++){
        if(s[i]!=t[i]){
            flag = false;
            break;
        }
    }

    if(flag == true){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}