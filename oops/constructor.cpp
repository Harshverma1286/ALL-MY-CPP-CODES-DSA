// #include<iostream>
// using namespace std;

// class bike{
//     public:
//     int tyresize;
//     int enginesize;

//     bike(){//default constructor 
//         cout<<"constructor is called "<<endl;;
//     }
// };

// int main(){

//     bike royalenfield;
//     bike pulsar;
//     bike ninja;

// }

//constructor initialises the object
//constructors creates the object
//constructor is called automatically when the object is created
//it is one of the hidden function
//constructor are of three types 1. default constructor 2. paramatrized constructor 3. copy constructor
 
 #include<iostream>
using namespace std;

class bike{
    public:
    int tyresize;
    int enginesize;

    bike(int tyresize , int enginesize){//paramatrized constructor parameters are passed here example int tyresize and int enginesize
        this->tyresize=tyresize;
          this->enginesize=enginesize;
        cout<<"constructor is called "<<endl;;
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

//copy constructor 
//in copy constructor we should always give value by call by refrence 
//shallow copy means it does not properly copies the values and when we change the value the value will also be changed in other variable 
//deep copy does not change the value even if we change the value in the first variable it willl not change 
//so copy constructor is mainly a deep copy 
// ex
// bike b1(50,100);
//bike b2;
//b2=b1;//shallow copy 

//deep copy or copy consturctor
// bike b2=b1;copy constructor
//bike b2(b1);
//bike(bike &b){
//call by refrence 
//}
// IMP - call by refrence is used in copy consructor
