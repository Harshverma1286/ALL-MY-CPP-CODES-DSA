#include<iostream>
using namespace std;

class books{
    public:
    char ch;
    int price;
    int noofpages;


    int countbooks(int p){
        if(p>price) return 0;
        else return 1;
    }

    bool isbookpresent(char check){
        if(check==ch) return true;
        else return false;
    }
};

int main(){

    books thebestseller;

    thebestseller.price = 40;
    thebestseller.noofpages = 2000;
    thebestseller.ch = 'H';
    cout<<thebestseller.countbooks(30)<<endl;
    cout<<thebestseller.isbookpresent('H');

}