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
    cout<<mark<<endl;
  }
 void operator+=(int extramarks){
      mark=mark+extramarks;
 }
  friend void operator -=(marks &obj,int min);

};


void operator -=(marks &obj,int min){
    obj.mark=obj.mark-min;
}
int main(){
  marks m(40);
  m+=40;
   m.display();
   m-=10;
   m.display();

}