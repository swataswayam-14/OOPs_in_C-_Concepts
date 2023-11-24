//using protected access specifier

//Car Vehicle Inheritance
#include<iostream>
using namespace std;

class Vehicle{
       
    protected:
        string type;
    public:
        int speed;
        void startEngine(){
            cout<<"The engine is started\n";
        }
};

class Car: public Vehicle{
    private:
        int brakeOil;
    public: 
        void Accelerate(){
            cout<<"The car started accelerating\n";
        }
        void setType(string typ){
            type = typ;
        }
        void display(){
            cout<<"The type of car is "<<type;
        }
};

int main(){

    Car mycar;
    mycar.speed = 280;
    mycar.startEngine();
    mycar.Accelerate();
    mycar.setType("porche");
    mycar.display();

    return 0;
}