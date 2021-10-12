#include<iostream>

using namespace std;
/*student done
test maths physics--> student done
sports pt_score-->student done
result --> sports , test.
*/
class student{
protected:
int roll_no;
public:
void set_roll(int a){
    roll_no=a;
}
void display(void){
    cout<<"your rool n0. is "<<roll_no<<endl;
}
};
class test : virtual public student{
protected:
float maths, physics;
public:
void set_marks(float m1,float m2){
maths = m1;
physics =  m2;
}
void print_marks(void){
    cout<< "your maths mark is"<<maths<<endl
           << "physics marks is"<<physics<<endl;
}
};
class sports : virtual public student{
protected:
int score;
public:
void set_score(int sc){
    score = sc;
}
void print_score(void){
    cout << "your pt_score is "<< score<< endl;
}
};
class result : public test, public sports{
protected:
float total;
public:
void total_score(void){
    total = maths + physics + score;
    display();
    print_marks();
    print_score();
    cout<< "your total score is "<< total<<endl;
}
};
int main(){
result sudhir;
sudhir.set_roll(21);
sudhir.set_marks(98.6 , 84.2);
sudhir.set_score(8);
sudhir.total_score();
return 0;
}