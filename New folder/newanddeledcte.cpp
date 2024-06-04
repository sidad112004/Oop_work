#include<iostream>
using namespace std;
class test{
    public:
      int x=0;
     
    void * operator new( size_t size){
         cout<<"overloading new operator"<<endl;
         void * p = malloc(size);
         return p;
    }
    void operator delete(void *p){
        cout<<"free"<<endl;
          free(p);
    }
};
int main(){
   test *t =new test;
   delete t;
}