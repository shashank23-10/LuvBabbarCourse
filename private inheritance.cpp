#include <iostream>
using namespace std; 

class Animal{
    public:   
        int age; 
        int weight; 
        void eat(){
          cout<<"Eating"; 
        }
};
class Dog: private Animal{
  public: 
  void print(){
    cout<<this->age; 
  }
};  

int main() {
  Dog d1; 
  d1.print();
}