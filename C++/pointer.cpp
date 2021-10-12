
#include <iostream>
using namespace std;
class A{
    int a;
    public:
    void setdata(int a){
        this->a = a;       
    }
    void getdata(){
        cout << "the value of a is"<<a<<endl;
    }
};
int main(){
    A b;
    b.setdata(4);
    b.getdata();
    return 0;
}
