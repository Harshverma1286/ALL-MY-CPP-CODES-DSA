#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of students :";
    cin>>n;

    int marks[n];
    cout<<"enter the marks :";
    for(int i=0;i<n;i++){
        cin>>marks[i];
    }
    for(int i=0;i<n;i++){
        if(marks[i]<35){
            cout<<i<<" ";
        }
    }

}