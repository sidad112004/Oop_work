#include<iostream>
using namespace std;

class a{
   public:
   int x;
  friend void display(a obj);
   friend class b;
};


void display(a obj){
     cout<<obj.x+10<<endl;
}


class b{
   public:
     void display(a obj){
            cout<< obj.x*120<<endl;
     }
};
int main(){
   a sid;
   sid.x=10;
   display(sid);
   b om;
   om.display(sid);


}