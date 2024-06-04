#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b;

    try {
        if (b == 0)
            throw(b); // Throwing an int type exception
        else
            c = a / b;
        cout << c << endl;
    }
    catch (char c) { // Catch block to handle/catch char type exception
        cout << "Caught exception: char type " << c << endl;
    }
    catch (int i) { // Catch block to handle/catch int type exception
        cout << "Caught exception: int type " << i << endl;
    }
    catch (short s) { // Catch block to handle/catch short type exception
        cout << "Caught exception: short type " << s << endl;
    }

    return 0;
}
