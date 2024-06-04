#include<iostream>
using namespace std;
int a=4;
int avg(int a,int b,int c){
 
 if(a==8){
     int i=0;
  return 1;
 }

avg(a++,b++,c++);
  
   
}


struct sid{
  int a;
  char b;
};

int main(){
  
  sid b;

  sid s[5];
  
  for(int i=0;i<5;i++){
    cin>>s[i].a;
    cin>>s[i].b;
  }

  cout<<endl;

  for(int i=0;i<5;i++){
    cout<<s[i].a<<"  "<<s[i].b<<endl;
  }





  #include<iostream>
using namespace std;
struct book{
  
    string name;                          
    string auth;
};
int main(){
    book b[4];
    cout<<"enter theb books";
    for(int i=0;i<4;i++){
        cin>>b[i].name>>b[i].auth;
    }
   
    for(int i=0;i<4;i++){
        cout<<b[i].name<<b[i].auth<<endl;
    }
}#include<iostream>
using namespace std;
struct book{
  
    string name;                          
    string auth;
};
int main(){
    book b[4];
    cout<<"enter theb books";
    for(int i=0;i<4;i++){
        cin>>b[i].name>>b[i].auth;
    }
   
    for(int i=0;i<4;i++){
        cout<<b[i].name<<b[i].auth<<endl;
    }
}



  int i=4;
  int* ptr=&i;

//   if(i==4)cout<<i;


//   int **ptr2 = &ptr;
 
//   cout<<ptr2<<endl;
//   cout<<ptr<<endl;
//   cout<<*ptr2<<endl;
//   cout<<**ptr2<<endl;



  
}