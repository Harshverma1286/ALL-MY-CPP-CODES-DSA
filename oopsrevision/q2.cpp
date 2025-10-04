#include<iostream>
using namespace std;

class students{
    private:
    int rollnumber;
    string name;
    string department;


    public:
    void setrollnumber(int rollnumber){
        this->rollnumber = rollnumber;
    }

    void setname(string name){
        this->name = name;
    }

    void setdepartment(string department){
        this->department = department;
    }

    int getrollnumber(){
        return rollnumber;
    }

    string getname(){
        return name;
    }

    string getdepartment(){
        return department;
    }
    bool comparedepartments(const string& otherstudents){
        return this->department==otherstudents;
    }
};

int main(){
    students harsh;
    harsh.setdepartment("computer science and engineering");

    students harshita;
    harshita.setdepartment("computer science and engineering");

    if(harsh.comparedepartments(harshita.getdepartment())){
        cout<<"both students are in the same departments";
    }
    else{
        cout<<"no both students are not in the same departments";
    }

}