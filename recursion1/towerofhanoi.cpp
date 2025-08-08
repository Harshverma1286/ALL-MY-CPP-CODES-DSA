#include<iostream>
using namespace std;
void towerofhanoi(int n,char s,char h,char d){
    if(n==0) return;
    towerofhanoi(n-1,s,d,h);
    cout<<s<<"->"<<d<<endl;
    towerofhanoi(n-1,h,s,d);
}

int main(){
    int n = 3;
    towerofhanoi(n,'A','B','C');
}