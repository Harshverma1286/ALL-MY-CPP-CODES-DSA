#include<iostream>
#include<vector>
using namespace std;

class cricketer{
    private:
    string name;
    int age;
    int numberofmatches;
    int averageruns;

    public:
    void setplayername(string name){
        this->name = name;
    }

    void setage(int age){
        this->age = age;
    }

    void setnumberofmatches(int numberofmatches){
        this->numberofmatches=numberofmatches; 
    }

    void setaverageruns(int averageruns){
        this->averageruns = averageruns;
    }

    string getname(){
        return name;
    } 

    int getage(){
        return age;
    }

    int getnumberofmatches(){
        return numberofmatches;
    }

    int getaverageruns(){
        return averageruns;
    }

};

int main(){

    cricketer virat;

    virat.setage(26);
    virat.setaverageruns(60);
    virat.setplayername("king kohli");
    virat.setnumberofmatches(100);

    cricketer maxwell;
    maxwell.setage(25);
    maxwell.setaverageruns(50);
    maxwell.setplayername("THE BIG SHOW");
    maxwell.setnumberofmatches(90);


    cricketer players[20] = {virat,maxwell};

    for(int i=0;i<2;i++){
        cout<<players[i].getname()<<endl;
        cout<<players[i].getage()<<endl;
        cout<<players[i].getaverageruns()<<endl;
        cout<<players[i].getnumberofmatches()<<endl;
    }

    vector<cricketer> cricket;

    for(int i=0;i<2;i++){
        cricketer *abd = new cricketer;
        abd->setage(40);
        abd->setaverageruns(50);
        abd->setplayername("MR 360");
        abd->setnumberofmatches(250);

        cricket.push_back(*abd);
    }


}