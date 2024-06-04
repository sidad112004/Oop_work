#include<iostream>
using namespace std;

class marks{
    int ex;
    int in;
    public:
      marks(){
        ex=0;
        in=0;
      }
      marks(int i,int e){
        in=i;
        ex=e;
      } 


      void display(){
          cout<<"internal marks is : "<<in<<endl<<"external marks is : "<<ex<<endl;
      }

      marks operator +(marks m){
        
          marks temp;
          temp.in=in+m.in;
          temp.ex=ex+m.ex;
          return temp;
      }
   marks operator-(marks m);
};


marks marks::operator-(marks m){//return type classname :: function name

marks temp;
temp.in=in-m.in;
temp.ex=ex-m.ex;
return temp;


}
int main(){
     marks m1(10,12);
     marks  m2(12,15);
     marks m3=m1+m2;

     marks m4=m1-m2;
     m4.display();
     m3.display();
}