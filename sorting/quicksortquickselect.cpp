#include<iostream>
using namespace std;

int partition(int arr[],int si , int ei){
    int pivotelement = arr[si];
    int count = 0;

    for(int i=si+1;i<=ei;i++){
        if(arr[i]<=pivotelement) count++;

    }
    int pivotidx=count+si;
    swap(arr[si],arr[pivotidx]);

    int i=si;
    int j=ei;

    while(i<pivotidx && j>pivotidx){
        if(arr[i]<=pivotelement) i++;

        if(arr[i]>pivotelement) j--;

        else if(arr[i]>pivotelement  && arr[j]<=pivotelement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotidx;

}

int kthsmallest(int arr[],int si, int ei,int k){
    int pi = partition(arr,si,ei);

    if(pi+1==k) return arr[pi];

    else if(pi+1<k) return kthsmallest(arr,pi+1,ei,k);

    else return kthsmallest(arr,si,pi-1,k);

}

int main(){
    int arr[]={5,18,82,20,7,6,31,4,-8};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    int k=6;

    cout<<kthsmallest(arr,0,n-1,k);
}