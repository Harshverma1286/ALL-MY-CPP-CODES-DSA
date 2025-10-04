#include<iostream>
using namespace std;

class dates{
    private:
    int date;
    int month;
    int year;

    public:
    void setdate(int date){
        this->date = date;
    }
    void setmonth(int month){
        this->month = month;
    }
    void setyear(int year){
        this->year = year;
    }

    int getdate()const{
        return date;
    }
    int getmonth()const{
        return month;
    }
    int getyear()const{
        return year;
    }

    bool checkdateandyear(const dates& others)const{
        if(this->date!=others.date){
            cout<<"the dates are not equal";
            return false;
        }
        if(this->month!=others.month){
            cout<<"the months are not equal";
            return false;
        }
        if(this->year!=others.year){
            cout<<"the year are not equal";
            return false;
        }
        cout<<"the dates are equal";
        return true;
    }
};

int main(){
    dates day1;
    day1.setdate(10);
    day1.setmonth(12);
    day1.setyear(2025);

    dates day2;
    day2.setdate(10);
    day2.setmonth(12);
    day2.setyear(2025);

     day1.checkdateandyear(day2);




}