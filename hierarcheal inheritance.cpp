#include <iostream>
using namespace std; 

class Car{
    public:   
        int age; 
        int weight;
        void speedUp(){
          cout<<"Speeding up"<<endl<<endl;
        }
};
class Scorpio: public Car{
};  
class Fortuner: public Car{
};

int main() {
  cout<<"Scorpio"<<endl;
  Scorpio s11; 
  s11.speedUp();

  cout<<"Fortuner"<<endl;
  Fortuner f11; 
  f11.speedUp();
}