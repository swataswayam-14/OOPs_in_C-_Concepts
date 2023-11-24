//the diamond pattern
#include<iostream>
using namespace std;

class A{
    public:
    A(int x){
        cout<<"A:A(int) called\n";
    }
};

class B: public A{
    public:
    B(int x): A(x){
        cout<<"B:B(int) called\n";
    }
};
class C: public A{
    public:
    C(int x): A(x){
        cout<<"C:C(int) called\n";
    }
};

class D : public B, public C{
    public:
        D(int x): B(x), C(x){
            cout<<"D:D(int) called\n";
        }
};

int main(){
    D d(30);
}