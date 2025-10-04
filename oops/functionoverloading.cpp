// function overloading comes under polymorphism
//function overloading comes under compile time polymorphism
// function overloading can be difine as same functions with different parameters 
// functions that we are building must be same but parameters that we are defining inside the functions must be same 

#include<iostream>
using namespace std;

class bike{
    public:
    int tyresize;
    int enginesize;

    //samefunctions
    void add(int a){
        cout<<10+a<<endl;
    }

    void add(int a , int b){
          cout<<a+b<<endl;
    }


};

int main(){
    
    // bike royalenfield;
    // bike ninja;

}