#include<iostream>
using namespace std;

class veichle{
    public:
    int features;

    virtual void show(){
        cout<<"this is viechle show !";
    }
};

class bike : public veichle{
    public:
    int somemorefeatures;

    void show(){
        cout<<"this is bike show !";
    }

};

int main(){

    bike b;

    veichle *a;
    a = new bike;

    a->show();
    cout<<endl;

    a= new veichle;

    a->show();


}