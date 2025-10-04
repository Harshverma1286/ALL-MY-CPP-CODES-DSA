#include<iostream>
using namespace std;

int sqrt(int x){
    long long low = 0;
    long long high = x;
    while(low<=high){
        long long mid = low+(high-low)/2;
        if((mid*mid)==x){
            return mid;
        }
        else if((mid*mid)<x){
            low = mid+1;
        }
        else high = mid-1;
    }
    return high;
}

int main(){
    int  x = 4;

    cout<<sqrt(x);
}