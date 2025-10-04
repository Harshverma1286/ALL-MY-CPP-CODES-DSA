#include<iostream>
using namespace std;

class Gun{
    public:
    int ammo;
    int damage;
    int scope;


};

class player{
   private:
    class helmet{

        int hp;
        int level;

        public:

        void sethp(int hp){
            this->hp=hp;

        }
        void setlevel(int level){
            this->level=level;
        }

        int gethp(){
            return hp;
        }
        int setlevel(){
            return level;
        }

    };
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;
    Helmet helmet;

    public:

    Gun getGun(){
        return gun;
    }
    void setgun(Gun gun){
        this->gun=gun;
    }

    int gethealth(){
        return health;
    }

    int getage(){
        return age;
    }
    int getscore(){
        return score;
    }
    int isalive(){
        return alive;
    }

    void sethealth(int health){
        this->health=health;
    }
    void setage(int age){
        this->age=age;
    }
    void setscore(int score){
        this->score=score;
    }
    void setisalive(bool alive){
        this->alive=alive;
    }


    void sethelmet(int level){
        helmet *helmet = new helmet ;
        helmet->setlevel(level);
        int health=0;
        if(level==1){
            health=25;
        }
        else if(level==2){
            health=50;
        }
        else if(level==3){
            health =100;
        }
        else{
            cout<<"error invalid level!!";
        }
        helmet->sethp(health);

    }


};

int main(){
    player harsh;


    Gun akm;
    akm.ammo=100;
    akm.damage=50;
    akm.scope=2;

    harsh.setage(21);
    harsh.setscore(100);
    harsh.setisalive(true);
    harsh.sethealth(70);


    player raghav;
    raghav.setage(25);
    raghav.setscore(80);
    raghav.setisalive(true);
    raghav.sethealth(80);

    Gun awm;
    awm.ammo=15;
    awm.damage=100;
    awm.scope=2;





}