#include<iostream>
#include<cmath>
using namespace std;

bool judgeSquareSum(int c){
    int low = 0;
    int high = sqrt(c);
    while(low<=high){
        int sum = (low*low)+(high*high);
        if(sum==c){
            return true;
        }
        else if(sum<c){
            low++;
        }
        else{
            high--;
        }
    }
    return false;

}

int main(){
    int c = 5;
    if(judgeSquareSum(c)){
        cout<<"yes the number has the sum of square numbers";
    }
    else{
        cout<<"no the number does not have sum of square numbers";
    }
}