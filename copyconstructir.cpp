#include<iostream>
using namespace std;
class sid{
    private:
      int a;
      int b;
    public:
   
      sid(void);//~sid(void); is none as destroctor and it destroy the object and free the memeroy
        


};
sid :: sid(void){ 
    a=0;
    b=0;
    cout<<"hello"<<endl;
}
int main(){
    sid a;
    sid b(a);
    sid c=a;//valid for the copy constructor
 
    //copy constructor is predfiend in nature
    c=a;//not valid statement for the copy constructor
 

    
    
}