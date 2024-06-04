#include<iostream>
using namespace std;
class sid{
    private:
      int a;
      int b;
    public:
      void setdata(int a1,int b1){
        a=a1;
        b=b1;
      }
      void sum(sid a1,sid b1){
          a=a1.a + b1.a;
          b=a1.b + b1.b;
        
 // friend function is the function which gives the acces to function about the complex funtion the function is delcered outside the coplex from that we can access the values and set the data
      }
      void display(void){
          cout<<a<<endl;
          cout<<b<<endl;
      }

};
int main(){
    sid a;
    sid b;
    sid c;
    a.setdata(56,75);
    b.setdata(5,4);
    c.sum(a,b);
    c.display();
    
}
int a=74;
int * ptr=a;