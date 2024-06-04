#include<iostream>
using namespace std;
class sid{
    private:
      int a;
      int b;
    public:
    
       sid(int x,int y);
    
};
sid :: sid(int x, int y){ //paramazied constructor the constructor whcih set value as the time of the instruction
    a=x;
    b=y;
    cout<<x<<"   "<<y<<endl;
}
int main(){
    //implicit call
    sid a(4,4);
    // explicit call
    sid b=sid(7,4);
    
}