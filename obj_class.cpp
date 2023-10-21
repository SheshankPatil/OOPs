// write a cpp to ilustrate for working of class to find the area and voullem of the room

#include <iostream>
using namespace std;
class room
{

public:
    int area, voulume, length, breadth, height;
    room(int x, int y, int z)
    {
        length = x;
        breadth = y;
        height = z;
        area = 2 * (x * y);
        voulume = (x * y * z);
    }
};

int main()
{
    room roomx(2, 3, 4);
    cout << "area" << roomx.area << endl
         << "area" << roomx.voulume << endl;
}