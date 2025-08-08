#include<iostream>
using namespace std;

int maze2(int rows,int columns){
    if(rows==1 && columns==1) return 1;
    if(rows<1 || columns<1) return 0;

    int rightways = maze2(rows,columns-1);
    int downways = maze2(rows-1,columns);

    int totalways = rightways+downways;

    return totalways;
}

void printpath(int rows,int columns,string s){
    if(rows==1 && columns==1){
        cout<<s<<endl;
        return;
    }
    if(rows<1 || columns<1) return;

    printpath(rows,columns-1,s+'r');
    printpath(rows-1,columns,s+'d');
}

int main(){
    cout<<maze2(3,3);
    printpath(3,3,"");
}