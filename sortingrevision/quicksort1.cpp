#include<iostream>
#include<vector>
using namespace std;

int partition(int arr[],int startidx,int endidx){
    int pivotelement = arr[(startidx+endidx)/2];

    int count = 0;
    for(int i=startidx;i<=endidx;i++){
        if(i==(startidx+endidx)/2) continue;
        if(arr[i]<=pivotelement){
            count++;
        }
    }
    int pivotidx = count+startidx;
    swap(arr[(startidx+endidx)/2],arr[pivotidx]);

    int i = startidx;
    int j = endidx;

    while(i<pivotidx && j>pivotidx){
        if(arr[i]<=pivotelement){
            i++;
        }
        if(arr[j]>pivotelement){
            j--;
        }
        else if(arr[i]>pivotelement && arr[j]<=pivotelement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotidx;
}

void quicksort(int arr[],int startidx,int endidx){
    if(startidx>=endidx) return;
    int pivotidx = partition(arr,startidx,endidx);

    quicksort(arr,startidx,pivotidx-1);

    quicksort(arr,pivotidx+1,endidx);
}

int main(){
    int arr[] = {5,1,8,2,7,6,3,4,-8};

    int n = sizeof(arr)/sizeof(arr[0]);

    int startidx = 0;
    int endidx = n-1;

    quicksort(arr,startidx,endidx);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}