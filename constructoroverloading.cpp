
#include <iostream>
using namespace std;
class sid
{
private:
    int a;
    int b;

public:
//we can make multiple constructator in the class olny the funxtion is worked whichh has same type of the arrugument
    sid(int x, int y=4)//jar constricator madhe ekach value asel jas khalachya constructor madhe ahe tr je paramater madhe ahe ti value ti use karanar telach apanconstrucator with dafalut aarugment manato
    {
        a = x;
        b = y;
        cout << a << "   " << b << endl;
    }
    // sid(int x)
    // {
    //     a = x;
    //     b = 0;
    //     cout << a << "   " << b << endl;
    // }
    sid(void)
    {
        a = 0;
        b = 0;
        cout << a << "   " << b << endl;
    }

};

int main()
{

    sid a(4, 4);
    sid b(3);//use constrctor with defult arrugument
    sid d(void);
}
