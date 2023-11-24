//Virtual functions concepts

#include<iostream>
using namespace std;

class Base{
    public:
        void display(){
            cout<<"display of base class";
        }
};

class derived: public Base{
    public:
        void display(){
            cout<<"display of derived class";
        }
};

//using virtual function
//making the function inside base class virtual
class Base1{
    public:
        void virtual display(){
            cout<<"display of base class";
        }
};

class derived1: public Base1{
    public:
        void display(){
            cout<<"display of derived class";
        }
};


int main(){
    cout<<"Enter 1 to see the result without the use of virtual function or 2 to see the result with the use of virtual function";
    int choice;
    cin>>choice;
    if(choice == 1){
        Base *p = new derived();
        p->display();
    }else{
        Base1 *p = new derived1();
        p->display();
    }
    return 0;
}