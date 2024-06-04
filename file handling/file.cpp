#include<iostream>
#include<fstream>
using namespace std;


// there is so many stream class with the help of that we create an objext and perform the input output opertion in the file
//it include instream ofstream 
int main(){
  ofstream out;
  out.open("one.txt");
  out<<"hello world";
  out.close();


  ifstream fin;
  fin.open("one.txt");
  
 char ch=fin.get();
  while(!fin.eof()){
    
    cout<<ch;
   ch=fin.get();
  }
  fin.close();
 

}