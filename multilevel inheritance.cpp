#include <iostream>
using namespace std; 

class Fruit{
    public:   
        string name = "ramu ki orchard"; 
        int age; 
};
class Mango: public Fruit{
  public:
  int weight;
};  
class Alphonso: public Mango{
    public: 
      int sugarlevel; 
};

int main() {
  Alphonso a; 
  cout<<a.name<<" "<<a.weight<<" "<<a.sugarlevel;
}