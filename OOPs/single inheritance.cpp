#include <iostream>
using namespace std; 

class Car{
    public:   
        string name; 
        int age; 
        int weight; 
        void speedUp(){
          cout<<"Speeding Up"<<endl; 
        }
        void breakHit(){
          cout<<"Hitting breaks"<<endl; 
        }
};
class Scorpio: public Car{
};  

int main() {
  Scorpio babbarwali; 
  babbarwali.speedUp(); 
}