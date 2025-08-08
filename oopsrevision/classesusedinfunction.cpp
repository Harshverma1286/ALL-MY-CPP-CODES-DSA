#include<iostream>
using namespace std;

class players{
    private:
    int somefeature;
    int somevalue;
    int somescore;
    

    public:

    void somefeatured(int somefeature){
        this->somefeature = somefeature;
    }

    void somemorevalues(int somevalue){
        this->somevalue = somevalue;
    }

    void somescorestobeset(int somescore){
        this->somescore = somescore;
    }

    int getthefeatures(){
        return somefeature;
    }

    int getthesomevalues(){
        return somevalue;
    }

    int getsomescore(){
        return somescore;
    }

};

players thevaluesineed(players a,players b){
    if(a.getthesomevalues()>b.getthesomevalues()){
        return a;
    }
    else return b;
}

players somemore(players a,players b){
    if(a.getthefeatures()>b.getthefeatures()){
        return a;
    }
    else return b;
}

int main(){

    players harsh;

    harsh.somefeatured(40);
    harsh.somemorevalues(50);
    harsh.somescorestobeset(100);

    players raghav;

    raghav.somefeatured(50);
    raghav.somemorevalues(60);
    raghav.somescorestobeset(70);

    players sanket = thevaluesineed(harsh,raghav);

    cout<<sanket.getthesomevalues()<<endl;

    cout<<sanket.getsomescore()<<endl;

    players maxwell = somemore(harsh,raghav);

    cout<<maxwell.getthefeatures()<<endl;


    players *urvi = new players;

    players *anotherplayer = new players;

    urvi->somefeatured(70);
    urvi->somemorevalues(80);
    urvi->somescorestobeset(100);

    cout<<urvi->getsomescore()<<endl;
    cout<<urvi->getthefeatures()<<endl;
    cout<<urvi->getthesomevalues()<<endl;

    anotherplayer->somefeatured(200);

    cout<<anotherplayer->getthefeatures();



}