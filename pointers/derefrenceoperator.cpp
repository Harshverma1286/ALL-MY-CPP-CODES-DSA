// #include<iostream>
// using namespace std;
// int main(){
//     int x=100;
//     int *p=&x;
//     cout<<*p;
// }
//by printing star p it basically means p ke andar jao wha pe jo adress hai us adress pe jao or uski value print kar do 

#include<iostream>
using namespace std;

int main(){
    int x=100;
    int *p=&x;
    cout<<x<<endl;
    *p=80;
    cout<<x;
}
//so here we can change the value by the help of *p without using x variable