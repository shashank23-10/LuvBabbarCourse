#include <iostream>
using namespace std; 

class Param{
    public:   
       int val;  

    void operator+(Param& obj2){
      int value1 = this-> val; 
      int value2 = obj2.val; 
      cout<<(value2-value1);
    }
};
int main() {
  Param obj1, obj2; 
  obj1.val=7; 
  obj2.val=2; 
  obj1+obj2; //this should print difference
}