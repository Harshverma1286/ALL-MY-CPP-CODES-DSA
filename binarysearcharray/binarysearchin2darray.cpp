#include<iostream>
using namespace std;

int main(){
    int m = 3;
    int n = 4;
    int target = 3;

    int arr[m][n]= {{1,3,5,7},{10,11,16,20},{23,30,34,60}};

    int low = 0;
    int high = m*n - 1;
    bool flag = false;

    while(low<=high){
        int mid = low+(high-low)/2;
        int row = mid/n;
        int column = mid%n;

        if(arr[row][column]==target){
            flag = true;
            break;
        }
        else if(arr[row][column]<target){
            low = mid+1;
        }
        else{
            high = mid+1;
        }
    }
    if(flag==true){
        cout<<"yes target is present in the following search space ";
    }
    else{
        cout<<"the target is not present in the following search space ";
    }
}