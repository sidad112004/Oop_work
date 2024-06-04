#include<iostream>
using namespace std;

class test{
  public:
  int x;
friend istream& operator >>(istream& input,test &obj);
friend ostream& operator <<(ostream& output,test&obj);
};

istream& operator >>(istream& input,test &obj){
    input>>obj.x;
    return input;
}

ostream& operator <<(ostream& output,test&obj){
    output<<obj.x;

    return output;
}
int main(){
    test t;
    cin>>t;
    cout<<t;
}