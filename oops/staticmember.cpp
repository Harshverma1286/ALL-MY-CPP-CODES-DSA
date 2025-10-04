//static keyword is used with a variable to make the memory of the variable static once a static variable is declared its memory cant be changed .
//static keyword belongs to a class
// it is same for all object
// we can call this using a class name also by the help of class name and scope resolution operator(::) class name :: statfunc();
//static will not create another object it will ek hi bar bana sakte hai not next time nahi bana sakte 

#include<iostream>
using namespace std;

class bike {
    public: 
    static int noofbikes;
    int tyresize;
    int enginesize;

    static void increasenoofbikes(){
        noofbikes++;
    }
};


int main(){
    bike royalenfield;
    bike bajaj;


    royalenfield.increasenoofbikes();
    cout<<royalenfield.noofbikes<<endl;
    cout<<bajaj.noofbikes<<endl;

    bajaj.increasenoofbikes();
    cout<<bajaj.noofbikes<<endl;
    cout<<royalenfield.noofbikes<<endl;
}