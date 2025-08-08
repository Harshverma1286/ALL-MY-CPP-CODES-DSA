#include<iostream>
#include<string>
using namespace std;

class students{
    private:
    int rollno;
    int somemoreinformation;
    string name;

    public:


    void settingthevalues(int roll){
        rollno = roll;
    }

    void somemore(int info){
        somemoreinformation = info;
    }

    void nameset(string names){
        name = names;
    }

    int gettheroll(){
        return rollno;
    }

    int someinformation(){
        return somemoreinformation;
    }

    string names(){
        return name;
    }


};

int main(){
    students harsh;

    harsh.settingthevalues(20);

    cout<<harsh.gettheroll()<<endl;

    harsh.nameset("harsh");

    cout<<harsh.names()<<endl;

    harsh.somemore(200);

    cout<<harsh.someinformation();
}