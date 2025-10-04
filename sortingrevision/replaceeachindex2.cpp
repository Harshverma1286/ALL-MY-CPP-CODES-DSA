#include<iostream>
#include<limits.h>

using namespace std;

float max(float a,float b){
    if(a>=b) return a;
    else return b;
}
float min(float a,float b){
    if(a<b) return a;
    else return b;
}

int main(){
    int arr[] = {5,3,10,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    bool flag = true;

    float kmin = (float)(INT_MIN);
    float kmax = (float)(INT_MAX);

    for(int i=0;i<n-1;i++){
        if(arr[i]>=arr[i+1]){
            kmin = max(kmin,(arr[i]+arr[i+1])/2.0);
        }
        else{
            kmax = min(kmax,(arr[i]+arr[i+1])/2.0);
        }
        if(kmin>kmax){
            flag = false;
            break;
        }
    }

    if(flag==false){
        cout<<-1;
    }
    else if(kmin==kmax){
        if((kmin-(int)kmin)==0){
            cout<<"so there is only one value :"<<kmin;
        }
        else{
            cout<<-1;
        }
    }
    else{
        if(kmin-(int)kmin>0){
            kmin = int(kmin)+1;
        }
        cout<<"the range is ["<<kmin<<","<<(int)kmax<<"]";
    }


}