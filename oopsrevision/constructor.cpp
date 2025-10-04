#include<iostream>
using namespace std;

class bikes{
    private:
    int tyresize;
    int whells;
    int power;

    bikes(int tyresize,int whells,int power){
        this->tyresize = tyresize;
        this->whells = whells;
        this->power = power;
        cout<<"constructor call hua"<<endl;
    }

    public:

    static bikes* createbike(int tyresize,int whells,int power){
        return new bikes(tyresize,whells,power);
    }

    void settyresize(int tyresize){
        this->tyresize = tyresize;
    }
    void setwhells(int whells){
        this->whells = whells;
    }
    void setpower(int power){
        this->power = power;
    }
    int gettyresize(){
        return tyresize;
    }
    int getwhells(){
        return whells;
    }
    int getpower(){
        return power;
    }

};

int main(){

    bikes* tvs = bikes::createbike(2,2,50);

    bikes* bmw = bikes::createbike(4,4,150);

    cout<<tvs->getpower()<<endl;

    cout<<bmw->getpower()<<endl;


}