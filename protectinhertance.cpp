#include<iostream>
using namespace std;
class base{
    protected:
    int a=4;
    private:
    int b;
};
class derived:protected base{//protected mode
    public:
    void display(){
        cout<<a<<endl;
        // cout<<b<<endl;      //error
    }   
};

//note 
/*   
(off base class)      public mode     private mode       protected mode
private memeber        not allowed      not allowed       not allowed

protect memeber       protected        private          protected

public memeber        public           private          protected
*/

//private ->protected -> public

int main(){
    derived d;
  //  d.a=5;
    // d.b=6;                //error
    d.display();
    return 0;
}