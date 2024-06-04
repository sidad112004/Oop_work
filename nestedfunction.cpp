#include<iostream>
#include<string>
//nusted function is a finction in ewhich we can make finction as private and call it in the public;
using namespace std;
class binary{
    private:
      string s;
      void check();
    public:
       void input();
      
       

};
 

void binary ::input(){
    cout<<"enter the string"<<endl;
    cin>>s;
    check();
}

void binary :: check(){

    for(int i=0;i<s.length();i++){
        if(s[i]!='0' && s[i]!='1'){
            cout<<"no binary number"<<endl;
            exit(0);
        }
    }
    cout<<"number is binary"<<endl;
}

int main(){
    binary b;
    b.input();
}