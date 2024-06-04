#include<iostream>
using namespace std;

class a {
public:
    int x, y;

    a() {
        x = 0;
        cout << "this is the default constructor" << endl;
    }

    a(int x) {
        this->x = y = x; // Corrected assignment
        cout << "This is parameterized constructor value: " << y << endl;
    }

    ~a() {
        int temp = x; // Corrected assignment
        cout << "This is destructor value: " << --temp << endl;  
    }

    void display(a a1) {
        cout << a1.x << endl;
    }
};

int main() {
    a obj1(1);
    a obj2(0);
    obj2.display(obj1);
    a obj3(obj2); // Corrected copy constructor call
    cout << obj3.x << endl;
    a obj4;
    return 0;
}
