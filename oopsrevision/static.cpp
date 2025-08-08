#include<iostream>
using namespace std;

class bikes{
    public:
    static int noofbikes;
    int tyresize;
    int speed;

    bikes(int tyresize,int speed){
        this->tyresize = tyresize;
        this->speed = speed;
    }

    static void increasenumberofbikes(){
        noofbikes++;
    }
};

int bikes::noofbikes = 10;

int main(){
    bikes royalenfield(10,15);
    bikes bajaj(10,20);

    royalenfield.increasenumberofbikes();

    cout<<royalenfield.noofbikes<<endl;
    cout<<bajaj.noofbikes<<endl;
    
}