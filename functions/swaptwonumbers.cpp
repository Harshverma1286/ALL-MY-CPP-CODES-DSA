#include<iostream>
using namespace std;


void swaptwonumbers(int& x,int& y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    int x;
    cin>>x;
    int y;
    cin>>y;
    cout<<x<<" "<<y<<endl;
    swaptwonumbers(x,y);
}