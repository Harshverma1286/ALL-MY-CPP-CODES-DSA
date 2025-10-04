#include<iostream>
using namespace std;

class veichle{
    public:
    int whells;
    int noofwheels;
    int engines;


};

class cars : protected veichle{
    public:
    int steering;
    int bonuts;
};

class twowhellers:public veichle{
    public:
    int handles;
    int helmets;
    int seater2;
};



int main(){
    cars bmw;
}