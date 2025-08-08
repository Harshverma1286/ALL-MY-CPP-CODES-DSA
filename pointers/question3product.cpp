#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"enter x :";
    cin>>x;
    int y;
    cout<<"enter y :";
    cin>>y;
    int *ptr1=&x;
    int *ptr2=&y;
    int z=(*ptr1)*(*ptr2);
    cout<<z;
}