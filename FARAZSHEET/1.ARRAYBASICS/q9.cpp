#include<iostream>
using namespace std;

int main(){
    int n = 8;
    int arr[n] ={1,2,3,4,1,2,5,6};

    int uniqueelements;
    int duplicateelements = 0;

    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            if(arr[i]==arr[j]){
                duplicateelements++;
            }
        }
    }
    uniqueelements = n-duplicateelements;
    cout<<duplicateelements<<" "<<uniqueelements;


}