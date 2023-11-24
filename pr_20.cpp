//illustrate the concept of pure virtual function and calculate the area of different shapes by using abstract class

#include<iostream>
using namespace std;

class Shapes{
    public:
        void virtual area() = 0;
};
class Rectangle: public Shapes{
    int l,b;
    public:
        Rectangle(int x , int y){
            l=x;
            b=y;
        }
        void area(){
            cout<<"Area of Rectangle is: \n"<<l*b;
        }
};

class Circle: public Shapes{
    int r;
    public:
        Circle(int x){
            r = x;
        }
        void area(){
            cout<<"Area of Circle is: \n"<<3.14*r*r;
        }
};

int main()
{   

    Shapes *s;
    s = new Rectangle(10,20);
    s->area();
    s = new Circle(5);
    s->area();
    return 0;
}