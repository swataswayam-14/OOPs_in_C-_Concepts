//overload + operator to add two complex numbers
#include<iostream>
using namespace std;

class Complex{
    private:
        int real, imag;
    public:
        Complex(): real(0), imag(0){};
        void input(){
            cout<<"Enter real part: ";
            cin>>real;
            cout<<"Enter imaginary part: ";
            cin>>imag;
        }

        Complex operator+ (const Complex obj){
            Complex temp;
            temp.imag = imag + obj.imag;
            temp.real = real + obj.real;
            return temp;
        }
        void output(){
            cout<<"Result is\n";
            cout<<"Real part : "<<real;
            cout<<"Imaginary part : "<<imag;
        }
};

int main()
{   
    cout<<"Enter first real number: ";
    Complex obj;
    obj.input();
    cout<<"Enter second real number: ";
    Complex obj2;
    obj2.input();
    Complex obj3;
    obj3 = obj + obj2;

    obj3.output();

    return 0;
}