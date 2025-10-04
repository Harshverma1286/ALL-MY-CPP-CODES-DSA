#include<iostream>
using namespace std;

class veichle{
    public:
    int enginesize;
    int tyresize;
    int lights;
    string companyname;
};

class car : public veichle{
    public:
    int steeringsize;
};

class bike : public veichle{
    public:
    int handlesize;
};


int main(){
    bike honda;
    honda.handlesize = 5;
    honda.tyresize=




}