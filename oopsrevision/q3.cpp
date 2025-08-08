#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

class employee{
    private:
    int employeeid;
    double salary;

    public:

    employee(int emp,double sal){
        employeeid = emp;
        salary = sal;
    }

    void dispaly(){
        cout<<employeeid;
        cout<<salary;
    }


    double getsalary(){
        return salary;
    }


    // double averagewages(vector<employee>& employee){
    //     double totalsalary =0;
    //    for(auto& emp : employee){
    //     totalsalary+=emp.getsalary();
    //    } 

    //    return totalsalary/employee.size();
    // }
    // static employee& maxSalary(const vector<employee>& employees) {
    //     if (employees.empty()) {
    //         throw runtime_error("Error: Employee list is empty!");
    //     }

    //     auto maxSalaryEmployee = max_element(employees.begin(),employees.end(),[](const employee& emp1, const employee& emp2) { return emp1.getsalary() < emp2.getsalary(); });

    //     return *maxSalaryEmployee; // Return by value
    // }
};

int main(){

}