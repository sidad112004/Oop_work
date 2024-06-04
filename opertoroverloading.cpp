#include<iostream>
using namespace std;
class base{
  public:
    int a;
    base(int b=4){
        a=b;
    }
    base operator +(base obj){
        cout<<(a+obj.a)<<endl;
            return base(this->a+obj.a);
    }
    base operator++(){
           a=a+5;
    } 
    base operator *(base obj){
        return(a*obj.a);
    }
    bool operator == (base obj){
        cout<<a<<"   "<<obj.a<<endl;
        return a==obj.a;
    }
};
int main(){
 base a,b,r,q;
       base c=a+b;
       cout<<c.a<<endl;
       ++a;
       cout<<a.a<<endl;
        base k=a*b;
        cout<<k.a<<endl;

       if(r==q){
        cout<<"A==B"<<endl;
       }
}