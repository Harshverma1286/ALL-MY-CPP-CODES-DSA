#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;

    if(x>=90 && x<=100){
        cout<<"excellent";
    }
    else if(x>=81 && x<=89){
        cout<<"very good";
    }
    else if(x>=71 && x<=80){
        cout<<"good";
    }
    else if(x>=61 && x<=70){
        cout<<"can do better";
    }
    else if(x>=51 && x<=60){
        cout<<"average";
    }
    else if(x>=40 && x<=50){
        cout<<"below average";
    }
    else{
        cout<<"fail";
    }
}