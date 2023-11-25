//purpose of a virtual function is to achieve runtime polymorphism
#include<iostream>
using namespace std;

class Car{
    public:
    virtual void start() = 0;
    virtual void stop() = 0;
};

class BMW: public Car{
    public:
        void start(){
            cout<<"BMW started\n";
        }
        void stop(){
            cout<<"BMW stopped\n";
        }
};

class Porche: public Car{
    public:
        void start(){
            cout<<"Porche started\n";
        }
        void stop(){
            cout<<"Porche stopped\n";
        }
};

int main(){
    Car *c = new BMW();
    c->start();
    c->stop();

    c = new Porche();

    c->start();
    c->stop();
    return 0;
}