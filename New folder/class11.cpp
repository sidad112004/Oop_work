#include <iostream>
using namespace std;

class a
{
private:
    int a = 45;

public:
    void display()
    {

        cout << a << endl;
    }
};
int main()
{
    a sid;
    sid.display();
}