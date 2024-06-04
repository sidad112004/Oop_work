#include<iostream>
using namespace std;

class a{
    public:
    int c;
    int y;
     a display(a obj){
            a temp;
            temp.c=obj.c*10;
           return temp;
     }
  
};
int main(){
    a sid;
    sid.c=14;
    a om;
    a parth=om.display(sid);
    cout<<parth.c<<endl;
    
}