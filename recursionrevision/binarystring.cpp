#include<iostream>
#include<vector>
#include<string>
using namespace std;

void binarystring(string str,int n){
    if(str.length()==n){
        cout<<str<<endl;
        return;
    }
    binarystring(str+'0',n);
    if(str.empty()){
        binarystring(str+'1',n); 
    }
    else if(str[str.length()-1]=='0'){
      binarystring(str+'1',n);
    }
}

int main(){
    string str ="";
    int n=3;
    binarystring(str,n);


}