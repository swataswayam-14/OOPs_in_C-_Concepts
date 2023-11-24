//stopping inheritance

//program to ensure that no further derived classes can be created from the base class


#include<iostream>
using namespace std;

class A final{ // "final" keyword is added here
    public:
        A(){
            cout<<"A:A() called\n";
        }
        A(int x){
            cout<<"A:A(int) called\n";
        }
    
};

class B:virtual public A{
    public:
        B(int x): A(x){
            cout<<"B:B(int) called\n";
        }
};

class C: virtual public A{
    public:
        C(int x): A(x){
            cout<<"C:C(int) called\n";
        }
};

class D: public B, public C{
    public:
        D(int x): B(x), C(x){
            cout<<"D:D(int) called\n";
        }
};

int main(){
    D d(30);
    return 0;
}

/*
    THE OUTPUT OF THE PROGRAM:

    pr_17.cpp:20:7: error: cannot derive from 'final' base 'A' in derived type 'B'
 class B:virtual public A{
       ^
pr_17.cpp:27:7: error: cannot derive from 'final' base 'A' in derived type 'C'
 class C: virtual public A{
       ^
        
*/
