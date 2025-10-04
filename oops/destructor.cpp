//destructor it means destruction 
//it destroys the object
// destructor is called when the object goes out of scope      out of scope means when it goes beyond its curly braces 
//destructor is very similar to constructor
//generally we do not use destructor more 
//it is known by the symbol ~
//destructor is called usually to free off the memory that has been taken by the object that is unnecesarilly taken the space 


#include<iostream>
using namespace std;

class bike{
    public:
    int tyresize;
    int enginesize;

    bike(int tyresize , int enginesize){
        this->tyresize=tyresize;
          this->enginesize=enginesize;
        cout<<"constructor is called "<<endl;;
    }

    ~bike(){
        cout<<"destructor is called "<<endl;
    }
};

int main(){

    bike royalenfield(50,60);
    bike pulsar(60,70);
    bike ninja(100,120);
    cout<<royalenfield.tyresize<<" "<<royalenfield.enginesize<<endl;
    cout<<pulsar.tyresize<<" "<<pulsar.enginesize<<endl;
    cout<<ninja.tyresize<<" "<<ninja.enginesize<<endl;

}