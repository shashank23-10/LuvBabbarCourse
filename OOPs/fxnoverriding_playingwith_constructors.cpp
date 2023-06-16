#include <iostream>
using namespace std;
class Animal {
public:
  Animal(){cout<<"Inside Animal Constructor"<<endl;}
  virtual void speak() { cout << "Speaking" << endl; }
};
class Dog : public Animal {
public:
  Dog(){cout<<"Inside Dog Constructor"<<endl;}
  // override
  void speak() { cout << "Barking" << endl; }
};
int main() {
  cout<<"Case-1"<<endl; 
  Animal* a= new Animal(); 
  cout<<"Case-2"<<endl; 
  Dog* b= new Dog(); 
    cout<<"Case-3"<<endl; 
  Animal* c= new Dog(); 
    cout<<"Case-4"<<endl; 
  Dog* d= (Dog*) new Animal; 
}