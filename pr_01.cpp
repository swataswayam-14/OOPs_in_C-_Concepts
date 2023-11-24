//count no. of objects created for a class. Use static member variables and constructor
#include<iostream>
using namespace std;
class Student {
private:
  int phy, chem, math;
  static int objCount;

public:
  Student(int phy, int chem, int math) {
    this->phy = phy;
    this->chem = chem;
    this->math = math;
    Student::objCount++;
  }
};

int Student::objCount = 0;

int main() {
  int phy, chem, math;
  cout << "enter marks of physics, chemistry and mathematics: ";
  cin >> phy >> chem >> math;
  Student s1(phy, chem, math);
  cout << "Total number of objects created is: " << Student::objCount;
  return 0;
}