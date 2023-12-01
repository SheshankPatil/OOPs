#include <iostream>
using namespace std;

class shape
{
protected:
    int width, height;

public:
    void setwidth(int w)
    {
        width = w;
    }
    void setheight(int h)
    {
        height = h;
    }
};

class rectangle : public shape
{
public:
    int getarea() const
    {
        return (height * width);
    }
};

int main()
{
    rectangle r;
    cout << "enter your height and width for the rectangle" << endl;
    // cin >> r.height;
    // cin >> r.width;
    r.setheight(10);
    r.setwidth(200);
    cout << "The area of the rectangle is: " << r.getarea() << endl;
    return 0;
}
