//function templates

#include<iostream>
using namespace std;

template <class T>
T max_num(T a , T b){
    return (a>b? a: b);
}

int main(){

    int x = 5 , y = 2;
    float a = 4.3, b = 7.8;

    cout<<"Maximum: "<<max_num<int>(x,y)<<"\n";
    cout<<"Maximum: "<<max_num<float>(a,b);

    return 0;
}
