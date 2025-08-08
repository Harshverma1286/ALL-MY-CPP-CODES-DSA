#include<iostream>
using namespace std;

int main(){
int arr[]={5,3,1,2,4};
int n=sizeof(arr)/sizeof(arr[0]);

for(int i=0;i<n-1;i++){
    int min = INT16_MAX;
    int minindex=-1;
for(int j=i;j<n;j++){
    if(min>arr[j]){
        min = arr[j];
        minindex = j;
    }
 
}
   swap(arr[i],arr[minindex]);


}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}



}
