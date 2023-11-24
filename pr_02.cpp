#include<iostream>
using namespace std;

class Exam{
    int ai, web , android;
    public:
        void display(void);
        void getMarks(void);
};

void Exam ::display(){
    cout<<"The marks obtained are \t"<<"ai: \t"<<ai<<"web: \t"<<web<<"android: \t"<<android;
    cout<<"total marks obtained is "<<ai+web+android;
}
void Exam :: getMarks(){
    cout<<"Enter the marks in all the subjects: ";
    cin>>ai>>web>>android;
}

int main(){

    Exam e1;
    e1.getMarks();
    e1.display();
    return 0;
}