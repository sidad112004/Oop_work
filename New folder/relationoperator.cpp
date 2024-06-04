#include<iostream>
using namespace std;
class marks{
 public:
  int mark;
  marks(){
    mark=0;
  }
  marks(int m){
    mark=m;
  }

  void display(){
    cout<<"mark is : "<<mark<<endl;
  }


   bool operator ==(marks obj){
       return obj.mark==mark;
   }

   bool operator <=(marks obj){
        return mark<= obj.mark;
   }
   bool operator >=(marks obj){
        return mark>= obj.mark;
   }
   bool operator !=(marks obj){
        return mark<= obj.mark;
   }
   



};
int main(){
    marks m1(10);
    marks m2(20);
    if(m1==m2){
        cout<<"m1 is equal to m2"<<endl;
    }
    else{
        cout<<"not equal"<<endl;
    }

     if(m1==m2){
        cout<<"m1 is equal to m2"<<endl;
    }
       else{
        cout<<"not equal"<<endl;
    }

     if(m1<=m2){
        cout<<"m1 is < equal to m2"<<endl;
    }
       else{
        cout<<"not < equal"<<endl;
    }
     if(m1>=m2){
        cout<<"m1 is > equal to m2"<<endl;
    }
       else{
        cout<<"not > equal"<<endl;
    }
}