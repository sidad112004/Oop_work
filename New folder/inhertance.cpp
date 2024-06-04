#include<iostream>
using namespace std;

class a{
  public:
  string name="sid";
  void display(){
    cout<<name<<endl;
  }

};

class b:virtual public a{
    public:

};
class c: virtual public a{
     public:
};
class d:public b, public c{
  public:
};




int main(){
    d p;
    p.display();


}