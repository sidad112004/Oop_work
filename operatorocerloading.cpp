#include<iostream>
using namespace std;

class person{
    public:
       string s;
       int age;
    friend ostream& operator << (ostream& output, const person& p) {
        output << "Name: " << p.s << ", Age: " << p.age << endl;
        return output;
    }
    friend istream& operator >>(istream &input,person &p){
        input>>p.s>>p.age;
    }
};
int main(){
     person p;
     cin>>p;
     cout<<p;
}