#include<iostream>
using namespace std;

int main(){
    int costprice;
    cout<<"enter the costprice : ";
    cin>>costprice;
    int sellingprice;
    cout<<"enter the sellingprice : ";
    cin>>sellingprice;
    int profit;
    if(costprice>sellingprice){
        profit = sellingprice-costprice;
        cout<<"the loss he occured is : "<<profit<<endl;
        cout<<"the person has occured loss";

    }
    if(sellingprice>costprice){
        profit = sellingprice-costprice;
        cout<<"the profit he occured is : "<<profit<<endl;
        cout<<"the person has occured profit";
    }
    else{
        profit = sellingprice-costprice;
        cout<<"the profit he occured is : "<<profit<<endl;
        cout<<"he does not occured any profit or loss";
    }
}