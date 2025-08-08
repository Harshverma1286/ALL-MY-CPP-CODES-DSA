#include<iostream>
using namespace std;

int binarysearch(int arr[] , int size , int key ){
    int start = 0;
    int end = size-1;

    int mid = (start + end)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid = (start + end) /2;
    }
    return -1;
}

int main(){
    int even[6]={2,4,8,18,36,48};
    int odd[6]={9,5,6,7,12,15};
    int evenindex = binarysearch(even,6,18);
    cout<<"index of the key value is :"<<evenindex<<endl;
    int oddindex = binarysearch(odd,6,12);
    cout<<"index of the key value is : "<<oddindex<<endl;

     return 0; 
}