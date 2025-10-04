#include<iostream>
using namespace std;

int main(){
    int n = 36;
    bool flag = false;

    int low =0;
    int high = n;
    while(low<=high){
        int mid = low+(high -low)/2;
        if(mid*mid==n){
            flag = true;
            break;
        }
        else if(mid*mid>n){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    if(flag==true){
        cout<<"the number given has its square root";
    }
    else{
        cout<<"the number does not have its square root";
    }
}