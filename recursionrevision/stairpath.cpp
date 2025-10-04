#include<iostream>
using namespace std;

int stairpath(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 3;

    int firstways = stairpath(n-1);

    int secondways = stairpath(n-2);

    int thirdways = stairpath(n-3);

    return firstways+secondways+thirdways;

}

int main(){
    int n;
    cin>>n;

    cout<<stairpath(n);
}