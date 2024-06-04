#include <iostream>
using namespace std;
class employee
{//classes is extension of the funcrion;
private:
    int a, b, c;

public:
    int d, f;
     void setdata(int a1, int b1, int c1); // funtion delecreation
    void getdata()
    {
        cout << "data at a " << a << endl;
        cout << "data at b " << b << endl;
        cout << "data at c " << c << endl;
        cout << "data at d " << d << endl;
        cout << "data at f " << f << endl;
    }
};


 employee :: setdata(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main()
{
    employee siddesh;
    siddesh.setdata(4,5,6);
    siddesh.d = 4;
    siddesh.f=54;
    siddesh.getdata();
    cout << siddesh.d << endl; // we can assess this is like structure
}