//multiplication of two fractions using the operator overloading of multiplication 

#include<iostream>
using namespace std;

class Frac {
    private:
        int a,b;
    public:
        Frac(): a(0) , b(0) {}
    void in(){
        cout<<"Enter the numerator: ";
        cin>>a;
        cout<<"Enter the denominator: ";
        cin>>b;
    }

    Frac operator* (const Frac &obj){
        Frac temp;
        temp.a = a*obj.a;
        temp.b = b*obj.b;
        return temp;
    }

    void out(){
        cout<<"The Result is: \n";
        cout<<"Numerator: "<<a;
        cout<<"Denominator: "<<b;
    }
};
int main(){
    Frac F1 , F2, result;
    cout<<"Enter the first fraction: ";
    F1.in();
    cout<<"Enter the second fraction: ";
    F2.in();

    result = F1 * F2;
    result.out();
}
