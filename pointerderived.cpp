#include <iostream>
using namespace std;

class a
{
public:
    void display()
    {
        cout << "running a" << endl;
    }

    //  virtual void display()
    // {
    //     cout << "running a" << endl;
    // }
};
class b : public a
{
public:
    void display()
    {
        cout << "running b" << endl;
    }
};
int main()
{
    a *base_ptr;
    a base;
    b dervived;
    base_ptr = &dervived;
    base_ptr->display();

    b *dervived_ptr;
    b obj;
    dervived_ptr = &obj;
    dervived_ptr->display();
}