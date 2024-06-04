#include<iostream>
using namespace std;
class a{
    private:
    static int cnt;
    
    public:
    
    int r;
   
    static void display(){
              cnt++;
          
          cout<<cnt<<endl;
    };

};

int a::cnt=0;

int main(){
   a sid;
   a om;
   a p;
   om.display();
   sid.display();
}