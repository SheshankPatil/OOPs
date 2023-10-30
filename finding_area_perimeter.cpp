#include <iostream>
using namespace std;
class A

{
private:
    int len, br, area, perimeter;

public:
    int setlength(int l)
    {
        len = l;
    }
    int setbreadth(int b)
    {
        br = b;
    }
    int getar()
    {
        return len * br;
    }
    int getperi()
    {
        return 2 * (len + br);
    }
};

int main()
{
    A a;
    a.setlength(20);
    a.setbreadth(20);
    cout << "area=" << a.getar() << endl;
    cout << "perimeter=" << a.getperi() << endl;
    return 0;
}