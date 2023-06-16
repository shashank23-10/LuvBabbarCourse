#include <iostream>
using namespace std;
class Animal {
public:
  virtual void speak() { cout << "Speaking" << endl; }
};
class Dog : public Animal {
public:
  // override
  void speak() { cout << "Barking" << endl; }
};
int main() {
  // case-1
  Animal *a = new Animal;
  a->speak(); // speaking printed
  // case-2
  Dog *b = new Dog;
  b->speak(); // barking printed
  // case-3 - Upcasting: Pointer of Parent Class Object of Child class
  Animal* c = new Dog;  
  c->speak();
}