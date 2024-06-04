#include<bits/stdc++.h>
using namespace std;

class base{
   public:
   int a=4;
   void display(){
    cout<<"base"<<endl;
   }

};

class base1:virtual public base{
  public:
     int a=4;
     void display(){
    cout<<"base"<<endl;
   }
};

class base2:virtual public base{
  public:
     int a=4;

};

class base3:public base1,public base2{
  public:
     int a=4;
};
//we are accessing the data from the base class but we are created base 3 using base 2 and base 1 it is ambiugation beacues it not possible to complier to choice one of the mathod

int main(){
    class base3 b;
    b.display();
}