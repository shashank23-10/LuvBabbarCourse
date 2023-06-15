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

  //constructor 
  //default constructor
  Animal(){
    this->age=9; 
    this->name="shashank";
    cout<<"Constructor Called"<<endl;
  }

  //parameterised constructor 
  Animal(int age){
    this->age=age;
    cout<<"Constructor Paremeterised called"<<endl;
  }

    Animal(int age, string name){
    this->age=age;
    this->name=name; 
    cout<<"Constructor Paremeterised called"<<endl;
      
  }

  //copy constructor 
  Animal(Animal &obj){
    this->age=obj.age; 
    this->name=obj.name; 
    this->weight=10; 
    cout<<"Copy Constructor called"<<endl;
  }

  //behavior 
  void eat(){
    cout<<"eating"<<endl;
  }
  void sleep(){
    cout<<"sleeping"<<endl;
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

  //third object 
  Animal* rocky=new Animal;
  cout<<rocky->name<<endl; 
  cout<<rocky->age<<endl;

  Animal* bucky=new Animal(10);
  cout<<bucky->age<<endl; 
  cout<<bucky->name<<endl; 

  Animal* captain=new Animal(100, "steve");
  cout<<captain->age<<endl; 
  cout<<captain->name<<endl; 

  //object copy
  Animal* c=bucky; 
  cout<<c->age<<endl; 
  cout<<c->name<<endl; 
  
  Animal* d(captain);
  cout<<d->age<<endl; 
  cout<<d->name<<endl; 
}