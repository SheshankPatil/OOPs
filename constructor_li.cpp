#include <iostream>
using namespace std;

class book
{
private:
    string title;
    string author;
    int publicationyear;

public:
    book()
    {
        title = "";
        author = "";
        publicationyear = 0;
    }
    book(string booktitle, string bookauthor, int year)
    {
        title = booktitle;
        author = bookauthor;
        publicationyear = year;
    }
    void displaydetail()
    {
        cout << "Title: " << title << "\nAuthor: " << author << "\nPublication Year: " << publicationyear << endl;
    }
};

int main()
{
    // Creating an instance of the book class using the default constructor
    book defaultBook;

    // Displaying details of the default book
    cout << "Default Book Details:\n";
    defaultBook.displaydetail();
    cout << endl;

    // Creating an instance of the book class using the parameterized constructor
    book myBook("The Catcher in the Rye", "J.D. Salinger", 1951);

    // Displaying details of the custom book
    cout << "Custom Book Details:\n";
    myBook.displaydetail();

    return 0;
}
