#include <iostream>
using namespace std;

class A
{
private:
    int x;

public:
    int fun()
    {
        return (2 * x);
    }
};

int main()
{
    A a;
    a.x = 70;
    cout << a.fun() << endl;
    cout << x.fun() << endl;
    return 0;
}