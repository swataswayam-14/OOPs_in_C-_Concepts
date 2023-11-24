//MULTI-LEVEL INHERITANCE

//create a class developer derived from class employee which is derived from class Person using multilevel inheritance
#include<iostream>
using namespace std;
class Person{
    int age;
    char name[100];
    public:
        void getData(){
            cout<<"Enter name: \n";
            cin>>name;
            cout<<"Enter age: \n";
            cin>>age;
        }
        void display(){
            cout<<"Name: \n"<<name;
            cout<<"Age: \n"<<age;
        }
};

class employee: public Person{
    char company[100];
    float salary;
    public:
        void getData(){
            Person::getData();
            cout<<"Enter company: \n";
            cin>>company;
            cout<<"Enter salary: \n";
            cin>>salary;
        }
        void display(){
            Person::display();
            cout<<"company: \n"<<company;
            cout<<"salary \n"<<salary;
        }
};

class developer: public employee{
    int num;
    public:
        void getData(){
            employee::getData();
            cout<<"Enter number of programming language known: \n";
            cin>>num;
        }
        void display(){
            employee::display();
            cout<<"The number of programming languages known is: \n"<<num;
        }
};

int main(){
    developer d;
    d.getData();
    d.display();
    return 0;
}