#include<iostream>
using namespace std;

class marks{
  int mark;
  public:
  marks(){
    mark=0;
  }
  marks(int m){
    mark=m;
  }

  void display(){
    cout<<"marks : "<<mark<<endl;
  }

  void operator--(){
       mark=mark-1;
  }


  friend void operator++(marks &obj);

};

void operator++(marks &obj){
    obj.mark=obj.mark+1;
}

int main(){
  marks m(40);
  m.display();
  ++m;
  m.display();
  --m;
  m.display();
}