#include<iostream>
using namespace std;

class viechle{
    public:
    virtual void show()=0;
    virtual void anothershow()=0;
};

class bike : public viechle{
    public:
    void show(){
        cout<<"this show is called";
    }

    void anothershow(){
        cout<<"the anothershow is called";
    }
};

int main(){
    bike b;


    b.show();
}