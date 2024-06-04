#include <iostream>
using namespace std;

class a
{
public:
    void display()
    {
        cout << "a" << endl;
    }
};

class b : public a
{
public:
    void display()
    {
        cout << "b" << endl;
    }
};

class c : public b
{
public:
    void display()
    {
        cout << "c" << endl;
    }
};

int main()
{
    c sid;
    
    sid.display();

    sid.b::display();
    sid.a::display();
}
