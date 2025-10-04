#include<iostream>
using namespace std;

bool isbadversion(int mid){
    int bad = 4;
    if(mid==bad) return true;
    else if(mid>bad) return true;
    else return false;
}

int firstbadversion(int n){
    int low = 0;
    int high = n;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(isbadversion(mid)==true){
            if(isbadversion(mid-1)==false){
                return mid;
                break;
            }
            else{
                high = mid-1;
            }
        }
        else{
            low = mid+1;
        }
    }
    return 100;
}

int main(){
    int n = 5;
    cout<<firstbadversion(n);

}