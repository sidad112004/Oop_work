#include <iostream>

class Base {
private:
    int value = 4;

public:
    friend void display( Base&);
};

void display( Base& base) {
    std::cout << base.value << '\n';
}

int main() {
    Base baseObject;
    display(baseObject);


    return 0;
}
