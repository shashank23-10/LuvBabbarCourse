#include <iostream>
using namespace std; 
class Animal{
  //making a pvt member 
  int weight;
  //making everything public 
  public:
  //state
  int age;
  string name; 

  //behavior 
  void eat(){
    cout<<"eating";
  }
  void sleep(){
    cout<<"sleeping";
  }

  int getWeight(){
    return weight;
  }
  void setWeight(int weight){
    this->weight = weight; 
  }
};

int main() {
  //Object Creation 
  Animal ramesh; //ramesh is an object of the class type Animal 

  //creation can be done in 2 ways 
  //static allocation 
  ramesh.age=12; 
  ramesh.name="lion"; 
  //to access Ramesh's age 
  cout<<"Age of ramesh is:"<<ramesh.age<<endl; 
  cout<<"Name of ramesh is:"<<ramesh.name<<endl; 
  ramesh.eat();
  ramesh.sleep(); 

  ramesh.setWeight(101);
  cout<<"\nWeight is: "<<ramesh.getWeight()<<endl;


  //dynamic allocation
  Animal* suresh = new Animal; 
  suresh->age=17; 
  suresh->name="dog";
  //alternate 
  (*suresh).age=15; 

  suresh->eat(); 
  suresh->sleep(); 
}