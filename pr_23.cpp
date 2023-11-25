//overloading function template

#include<iostream>
using namespace std;

template <class T>

T sum(T a , T b){
    cout<<"The sum is "<<a+b<<"\n";
}
void sum(int a , int b){
    cout<<"The sum is "<<a+b<<"\n";
}
int main(){
    sum(4.5,6.7);
    //sum(5.6);
    sum(1,2);
}