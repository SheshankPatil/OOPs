#include <iostream>
using namespace std;

class rectangle
{
    double l, b;

public:
    rectangle(double len, double brt)
    {
        l = len;
        b = brt;
    }
    double calculatearea()
    {
        return l * b;
    }
};

int main()
{
    rectangle r(37, 8);
    cout << "area of rectangle:" << r.calculatearea() << endl;
    return 0;
}