//program demonstrates the use of different types of constructors

#include<iostream>
using namespace std;

class Coordinate{
    private:
        int x_cor, y_cor;
    public:
    Coordinate(int x , int y){
        x_cor = x;
        y_cor = y;
    }
    Coordinate(const Coordinate &cor){
        x_cor = cor.x_cor;
        y_cor = cor.y_cor;
    }
    int get_y_cor(){
        return y_cor;
    }
    int get_x_cor(){
        return x_cor;
    }
};

int main(){

    Coordinate c1(2,3);
    Coordinate c2 = c1;
    Coordinate c3(c1);
    cout<<"x_cor of c1 = "<<c1.get_x_cor()<<"\n";
    cout<<"y_cor of c1 = "<<c1.get_y_cor()<<"\n";
    cout<<"x_cor of c2 = "<<c2.get_x_cor()<<"\n";
    cout<<"y_cor of c2 = "<<c2.get_y_cor()<<"\n";
    cout<<"x_cor of c3 = "<<c3.get_x_cor()<<"\n";
    cout<<"y_cor of c3 = "<<c3.get_y_cor()<<"\n";
    return 0;
}