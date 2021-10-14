#include<iostream>

using namespace std;

class temp{
    float t;
    char c;

    public:
    void input();
    void convert();
    void display();
};

void temp :: input(){
    cout<<"Temp in C or F ? ";cin>>c;
    cout<<"Enter the temp = ";cin>>t;
}

void temp :: convert(){
    c = toupper(c);

    if (c == 'F')
    {
        t = (t-32)/1.8;
        c = 'C';
    }else if (c == 'C')
    {
        t = (t*1.8) + 32;
        c = 'F';
    }
}

void temp :: display(){
    cout<<"temp in "<<c<<" = "<<t<<endl;
}

int main(){
    temp t1;

    t1.input();
    t1.convert();
    t1.display();

    return 0;
}