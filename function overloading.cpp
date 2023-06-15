#include <iostream>
using namespace std; 

class Maths{
    public:   
    //function overloading
      int sum(int a, int b){
        cout<<"First Singature"<<endl; 
        return a+b;  
      }
      int sum(int a, int b, int c)
      {
        cout<<endl<<"Second Singature"<<endl; 
        return a+b+c; 
      }
};
int main() {
  Maths obj; 
  cout<<obj.sum(2,5);
  cout<<obj.sum(4,73,4);
}