#include<iostream>
using namespace std;

class guns{
    private:
    int scope;
    int accuracy;
    int ammo;
    int skill;


    public:
    void setscope(int scope){
        this->scope = scope;
    }

    void setaccuracy(int accuracy){
        this->accuracy = accuracy;
    }

    void setammo(int ammo){
        this->ammo = ammo;
    }

    void setskill(int skill){
        this->skill = skill;
    }

    int getscope(){
        return scope;
    }

    int getaccuracy(){
        return accuracy;
    }

    int getammo(){
        return ammo;
    }

    int getskill(){
        return skill;
    }
};

class player{
    private:
    class power{
        private:
        int health;
        int hp;
        int medicine;
        int bags;

        public:
        
        void sethealth(int health){
            this->health = health;
        }

        void sethp(int hp){
            this->hp= hp;
        }

        void setmedicine(int medicine){
            this->medicine = medicine;
        }

        void setbags(int bags){
            this->bags = bags;
        }

        int gethealth(){
            return health;
        }
        int gethp(){
            return hp;
        }
        int getmedicine(){
            return medicine;
        }
        int getbags(){
            return bags;
        }

    };
    int playerskill;
    int playerid;
    int weapons;
    int numberoffreinds;
    guns gun1;
    power perperson;

    public:
    void setplayerskills(int playerskill){
        this->playerskill = playerskill;
    }

    void setgun1(guns gun1){
        this->gun1 = gun1;
    }

    void setplayersid(int id){
        playerid = id;
    }

    void setweapons(int weapons){
        this->weapons = weapons;
    }

    void setnumberoffreinds(int numberoffreinds){
        this->numberoffreinds = numberoffreinds;
    }

    void setperpersonhealth(int health){
        perperson.sethealth(health);
    }

    void setperpersonhp(int hp){
        perperson.sethp(hp);
    }

    void setperperonmedicine(int medicine){
        perperson.setmedicine(10);
    }

    void setperpersonbags(int bags){
        perperson.setbags(bags);
    }

    int getplayerskill(){
        return playerskill;
    }

    int getplayerid(){
        return playerid;
    }

    int getweapons(){
        return weapons;
    }

    int getnumberoffreinds(){
        return numberoffreinds;
    }

    guns getgun1(){
        return gun1;
    }

    int getperpersonhealth(){
        return perperson.gethealth();
    }

    int getperpersonhp(){
        return perperson.gethp();
    }

    int getperpersonmedicine(){
        return perperson.getmedicine();
    }

    int getperpersonbags(){
        return perperson.getbags();
    }

};

int main(){

    player harsh;
    harsh.setplayerskills(50);
    harsh.setplayersid(1212);
    harsh.setweapons(6);
    harsh.setnumberoffreinds(5);

    player kunal;
    kunal.setplayerskills(40);
    kunal.setplayersid(1218);
    kunal.setweapons(5);
    kunal.setnumberoffreinds(5);

    guns akm;

    akm.setscope(2);
    akm.setammo(200);
    akm.setskill(80);
    akm.setaccuracy(90);

    guns awm;
    awm.setscope(8);
    awm.setammo(15);
    awm.setskill(94);
    awm.setaccuracy(99);

    harsh.setgun1(awm);
    kunal.setgun1(akm);

    cout<<kunal.getgun1().getammo()<<endl;

    cout<<harsh.getgun1().getscope()<<endl;

    harsh.setperpersonhealth(50);
    harsh.setperpersonhp(80);
    harsh.setperperonmedicine(10);
    harsh.setperpersonbags(2);

    cout<<harsh.getperpersonmedicine()<<endl;
    cout<<harsh.getperpersonbags()<<endl;
    cout<<harsh.getperpersonhp()<<endl;
    cout<<harsh.getperpersonhealth()<<endl;







}