//unary operator overloading

#include<iostream>
using namespace std;

class Number{
    private:
        int no;
    public:
        Number(): no(0) {};
        void getNum(){
            cout<<"Enter a number: ";
            cin>>no;
        }
        Number operator- (){
            no = -no;
        }
        void out(){
            cout<<"The final number is "<<no;
        }
};
int main(){

    Number obj1;
    obj1.getNum();
    -obj1;
    obj1.out();

    return 0;
}