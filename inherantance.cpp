#include <iostream>
using namespace std;
 
 class employee{
    
    public:
    int id;
    int salary;
    employee(int id){
        id=id;
        salary=34;
    }  
    employee(){}
    
 };

class programer:/*visblity private or public*/public employee{

 public:
 programer(int myid){
    id=myid;
 }
 void getdata(){
    cout<<id<<endl;
 }

 //notes
 //defalut private memeber honar jar apan visiblity dili nahi tr
 //private manje jo base class ahe te member dervied class sati public asnar
   
};
int main(){
 employee sid(1);
  cout<<sid.salary<<endl;

 programer parth(2);
parth.getdata();
cout<<parth.id<<endl;

return 0;
}