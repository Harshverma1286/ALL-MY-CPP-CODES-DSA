#include<iostream>
using namespace std;

int main(){
    int n = 6;
    int arr[n] = {1,2,2,1,2,1};

    bool flag = false;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            flag = true;
            break;
        }
    }
    if(flag==true){
        cout<<"yes it exist";
    }
    else{
        cout<<"no it does not exist";
    }
}