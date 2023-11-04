#include <iostream>
using namespace std;
class operations
{
public:
    int a;
    int b;
    inline int add()
    {
        return a + b;
    }
    inline int sub()
    {
        return a - b;
    }
    inline int mul()
    {
        return a * b;
    }
    inline double div()
    {
        if (b != 0)
        {
            return static_cast<double>(a / b);
        }
        else
        {
            cout << "error:division by zero not possible" << endl;
            return 0;
        }
    }
};

int main()
{
    operations op;
    cout << "enter the numbers" << endl;
    cin >> op.a >> op.b;
    cout << "addition:" << op.add() << endl;
    cout << "substration:" << op.sub() << endl;
    cout << "multiplication:" << op.mul() << endl;
    cout << "division:" << op.div() << endl;
}
