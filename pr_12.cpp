//concat 2 strings using operator overloading
#include<iostream>
#include<string.h>
using namespace std;

class Concat{

    char s[100];
    public:
        void get_string(){
            cout<<"Enter a string: ";
            cin>>s;
        }
        void out(){
            cout<<"After concatenation the string is: \n";
            cout<<s;
        }
        Concat operator+ (Concat obj){
            Concat temp;
            strcpy(temp.s, s);
            strcat(temp.s , obj.s);
            return temp;
        }
        
};

int main(){

    Concat s1;
    s1.get_string();

    Concat s2;
    s2.get_string();

    Concat s3;
    s3 = s1 + s2;
    s3.out();

    return 0;
}