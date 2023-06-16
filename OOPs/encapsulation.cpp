#include <iostream>
using namespace std; 

class Animal{
  //public:   
        int age; 
        int weight; 

        void eat(){
          cout<<"Eating"; 
        }
    //since data members are private now, we need getters and setters
    int getWeight(int weight)
    {
      return this->weight;
    }
    void setWeight(int weight){
      this->weight = weight; 
    }

    int getAge(int age)
    {
      return this->age;
    }
    void setAge(int age){
      this->age = age; 
    }

};

int main() {
  //static allocation
  cout<<"static"<<endl;
  Animal wanda;
  wanda.age=9;
  cout<<wanda.age<<endl; 

  //dynamic
  cout<<"dynamic"<<endl;
  Animal* quicksilver = new Animal; 
  quicksilver->age=80; 
  cout<<quicksilver->age<<endl;

  //manually
  delete quicksilver;
}