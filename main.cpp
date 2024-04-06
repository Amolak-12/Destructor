#include <iostream>
using namespace std;

class Animal {
  public:
   // Data Variables
     string name;
     int age;
   //Member Function
     void eat() {
       cout << "Animal " << name << " is not eating." << endl;
     }
     void sleep() {
       cout << "Animal " << name << " is in a state of sleeping." << endl;
     }
   //Constructor
     Animal(string name, int age) {
       this->name = name;
       this->age = age;
       cout << "Constructor called!!!" << endl;
     }
   //Destructor
     ~Animal() {
       cout << "Calling Destructor!!!" << endl;
     }

};
int main() {
  //Creating Object
   Animal* ani1 = new Animal("Lion", 35);
   //Prinitng
   cout << "Name of the animal : " << ani1->name << endl;
   cout << "Age of the animal : " << ani1->age << endl;
   //Calling Member Function 
   ani1->eat();
   ani1->sleep();

  //Destructor called
   delete ani1;
}