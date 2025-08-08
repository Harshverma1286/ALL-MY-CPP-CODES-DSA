// #include<iostream>
// using namespace std;

// void swap(int *a,int *b){
//     int temp = *a;
//     *a=*b;
//     *b=temp;
//     return;

// }

// int main(){
//     int a= 10;
//     int b=20;
//     int *x=&a;
//     int *y=&b;
//     swap(x,y);
//     cout<<x<<" "<<y;
// }

#include<iostream>
using namespace std;

void swap(int *a,int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
    return;

}

int main(){
    int x=100;
    int y=90;
    swap(&x,&y);
    cout<<x<<" "<<y;
}