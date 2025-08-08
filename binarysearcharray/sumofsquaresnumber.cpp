#include<iostream>
using namespace std;

int main(){
    int c = 41;

    bool flag = false;

    for(int i=1;i<c;i++){
        for(int j=1;j<c;j++){
            if(((i*i)+(j*j))==c){
                flag = true;
                break;
            }
        }
    }
    if(flag==true){
        cout<<"yes the number has the sum of square numbers";
    }
    else{
        cout<<"no the number does not have sum of square numbers";
    }
}