#include <iostream>
using namespace std; 

class A{
    public:   
        int physics; 
        int chemistry=95;
};
class B{
  public:
  int chemistry=82;
};  
class C: public A, public B{
    public: 
      int maths; 
};

int main() {
  C obj; 
  cout<<obj.physics<<" "<<obj.A::chemistry<<" "        <<obj.B::chemistry<<" "<<obj.maths;
}