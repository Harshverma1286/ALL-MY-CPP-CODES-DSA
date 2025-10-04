#include<iostream>
using namespace std;

int partition(int arr[],int si,int ei){
    int pivotelement = arr[(si+ei)/2];
    int count=0;
    for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2) continue;
        if(arr[i]<=pivotelement) count++;
    }
    int pivotidx = count+si;
    swap(arr[(si+ei)/2],arr[pivotidx]);
    int i=si;
    int j=ei;
    while(i<pivotidx && j>pivotidx){
        if(arr[i]<=pivotelement) i++;
        if(arr[j]>=pivotelement) j--;
        else if(arr[i]>pivotelement && arr[j]<=pivotelement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotidx;
}

int kthsmallest(int arr[],int si,int ei,int k){
    int pivotidx = partition(arr,si,ei);

    if(pivotidx+1==k) return arr[pivotidx];

    if(pivotidx+1<k) return kthsmallest(arr,pivotidx+1,ei,k);
    else return kthsmallest(arr,si,pivotidx-1,k);
}

int main(){
    int arr[] = {5,1,8,7,6,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int si = 0;
    int ei = n-1;
    int k = 4;

    cout<<kthsmallest(arr,si,ei,k);
}