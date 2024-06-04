#include<iostream>
using namespace std;
class form{
  public:
    int age;
    string name;
};
class sd{
 public:
   int rollno;
   string ad;

   void display(){
    cout<<"this is sd form"<<endl;
   }
};

int main(){
    form sid;
    sid.age=14;
    sid.name="siddesh";
    cout<<sid.age<<sid.name<<endl;

    sd aditya;
    aditya.rollno=14254;
    aditya.ad="kol";

    aditya.display();
    
    cout<<aditya.ad<<aditya.rollno<<endl;
}