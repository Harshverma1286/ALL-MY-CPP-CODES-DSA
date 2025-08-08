#include<iostream>
#include<string>
using namespace std;

bool canchange(string start,string target){
    if(start.length()!=target.length()) return false;

    int i=0;
    int j=0;
    int n= start.length();
    while(i<n && j<n){
        while(i<n && start[i]=='_'){
            i++;
        }
        while(j<n && target[j]=='_'){
            j++;
        }
        if(i==n || j==n) break;
        if(start[i]!=target[j]) return false;
        if(start[i]=='L' && target[j]=='L'){
            if(i<j) return false;
            else{
                i++;
                j++;
            }
        }
        if(start[i]=='R' && target[j]=='R'){
            if(i>j) return false;
            else{
                i++;
                j++;
            }
        }
    }
    while(i<n){
        if(start[i]!='_'){
            return false;
        }
        i++;
    }
    while(j<n){
        if(target[j]!='_'){
            return false;
        }
        j++;
    }
    return true;
}

int main(){
    string start = "_L__R__R_";

    string target = "L______RR";


    bool ans = canchange(start,target);

    if(ans==true){
        cout<<"TRUE";
    }
    else cout<<"FALSE";
}