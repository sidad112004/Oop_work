#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("one.txt", ios::app | ios::binary);
    fout << "sid/n";
    fout.close();
    ifstream fin;
    fin.open("one.txt", ios::in);

    while (!fin.eof())
    {
        int pos = fin.tellg();
        cout << pos << endl;
        char c;
        c = fin.get();
        cout << c;
    }

    fin.close();

    // shop* ptr=new shop[30];
}
