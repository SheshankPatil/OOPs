#include <iostream>
using namespace std;

class item
{
    int m, n;

public:
    item(int x, int y)
    {
        m = x;
        n = y;
    }
    void put();
};
void item::put()
{
    cout << "t1:" << m << endl;
    cout << "t2:" << n << endl;
}

int main()
{
    item t1(10, 20);
    item t2(20, 30);
    t1.put();
    t2.put();
    return 0;
}