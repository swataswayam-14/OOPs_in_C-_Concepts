//overload operator + to add time in hours and minutes

#include<iostream>
using namespace std;

class Time{
    private:
        int hours, minutes;
    public:
        Time(): hours(0), minutes(0) {};

        Time operator+ (const Time &obj){
            Time temp;
            temp.hours = hours + obj.hours;
            temp.minutes = minutes + obj.minutes;
            return temp;
        }
        void in(){
            cout<<"Enter hours: ";
            cin>>hours;
            cout<<"Enter minutes: ";
            cin>>minutes;
            if(minutes >= 60){
                minutes -= 60;
                hours++;
            }
        }

        void out(){
            cout<<"Hours: "<<hours;
            cout<<"Minutes: "<<minutes;
        }
};
int main(){
    cout<<"Enter time 1: ";
    Time obj1;
    obj1.in();
    cout<<"Enter time 2: ";
    Time obj2;
    obj2.in();
    Time obj3;
    obj3 = obj1 + obj2;

    obj3.out();
    
    return 0;
}