#include<bits/stdc++.h>
using namespace std;


class base1{
  public:
  void display(){
    cout<<"base1"<<endl;
  }
};

class base2{
 public:
 void display(){
    cout<<"base2"<<endl;
 }
};


class derived: public base1,public base2{
    public:
    int a;
    void display(){
        base2::display();
    }
};
int main(){
      derived a;
      a.display();
}







