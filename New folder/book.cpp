#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

struct Book
{

    string Book_name;

    string Author_name;
};

Book readBook(istream &is)
{
    Book book;
    if (!(is >> book.Book_name >> book.Author_name))
    {
        throw runtime_error("Error: unable to read input.\n");
    }
    return book;
}

int main()
{
    Book B[5];
    for (int i = 0; i < 5; i++)
    {
        try
        {
            B[i] = readBook(cin);
        }
        catch (const exception &e)
        {
            cerr << e.what();
            return 1;
        }
    }
    for (int i = 0; i < 5; i++)
        cout << B[i].Book_name << B[i].Author_name << endl;
    return 0;
}
