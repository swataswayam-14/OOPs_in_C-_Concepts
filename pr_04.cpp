//use new and delete operator in C++ that allocates memory location for two integer values and computes the sum of these values

#include<iostream>
using namespace std;

int main(){
    int *p1, *p2 , sum;
    p1 = new int;
    p2 = new int;

    cout<<"Enter the first value: ";
    cin>>*p1;

    cout<<"Enter the second value: ";
    cin>>*p2;

    sum = *p1 + *p2;
    cout<<"The sum is "<<sum;

    delete p1;
    delete p2;
    
    return 0;
}