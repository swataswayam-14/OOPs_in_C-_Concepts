//Car Vehicle Inheritance
#include<iostream>
using namespace std;

class Vehicle{
       
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
            cout<<"The car started accelerating";
        }
};

int main(){

    Car mycar;
    mycar.speed = 280;
    mycar.startEngine();
    mycar.Accelerate();

    return 0;
}