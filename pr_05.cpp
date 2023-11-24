#include<iostream>
using namespace std;

int main(){
    int *p[4], *pn1, *pn2 , *pn3, *pn4, min;

    cout<<"Enter the first value: ";
    cin>>*pn1;

    cout<<"Enter the second value: ";

    cin>>*pn2;

    cout<<"Enter the third value: ";
    cin>>*pn3;

    cout<<"Enter the fourth value: ";
    cin>>*pn4;

    p[0] = pn1;
    p[1] = pn2;
    p[2] = pn3;
    p[3] = pn4;
    
    min = *p[0];
    int i = 1;
    while(i<=3){
        if(min> *p[i])
            min = *p[i];
        i++;
    }

    cout<<"The minimum value you entered is: "<<min;
    delete pn1;
    delete pn2;
    delete pn3;
    delete pn4;

    return 0;
}