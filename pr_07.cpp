//copy constructor to find the factorial of a number
#include<iostream>
using namespace std;
class ABC{
    private:
        int var , fact;
    public:
        ABC(int temp){
            var = temp;
        }
        int calc_fact(){
            fact = 1;
            for(int i = 1 ; i<=var ;i++){
                fact = fact*i;
            }
            return fact;
        }

        int main(){
           
            int num;
            cout<<"Enter a number to find its factorial: ";
            cin>>num;
            ABC obj(num);
            cout<<"The factorial is: "<<obj.calc_fact();
            ABC cpy = obj;
            cout<<"The factorial of the copy is: "<<cpy.calc_fact();
        }
};