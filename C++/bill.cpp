#include<iostream>

using namespace std;

class billcalc{
    int unit;
    float bill;

    public:
    void input();
    void calc();
    void display();
};

void billcalc :: input(){
    cout<<"Number of units used = ";cin>>unit;
}

void billcalc :: calc(){

    if (unit <= 100)
    {
        bill = unit*0.5;
    }else if (unit <= 200)
    {
        bill = 100*0.5 + (unit-100)*0.6;
    }else
    {
        bill = 100*0.5 + 100*0.6 + (unit-200)*0.9;
    }
    
    if (bill <=50)
    {
        bill = 50;
    }
    if (bill >300)
    {
        bill = bill + (bill-300)*0.05;
    }
    
}

void billcalc :: display(){
    cout<<"bill = Rs "<<bill<<endl;
}

int main(){
    billcalc u;

    u.input();
    u.calc();
    u.display();

    return 0;
}