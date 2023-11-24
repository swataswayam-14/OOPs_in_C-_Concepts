//create a constant member function rectangle to find area of it

#include<iostream>
using namespace std;

class Reactangle{
    public:
    void area(int l , int b) const{
        cout<<"The area is : "<<l*b;
    }
}; 

int main(){
    Reactangle r1;
    r1.area(12,34);
    return 0;
}