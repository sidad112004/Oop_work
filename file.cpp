#include<iostream>
#include<fstream>
using namespace std;


int main(){

  ofstream g("country.txt");
   g<<"inda"<<endl;

   g<<"sd";

   g.close();

   ifstream r("country.txt");
  
   string s;
//    char line[20];
//    r.getline(line,80);
//    cout<<line<<endl;

  

   while( getline(r,s)){
    cout<<s<<endl;
   }

   }