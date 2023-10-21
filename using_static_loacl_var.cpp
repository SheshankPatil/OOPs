#include <iostream>
using namespace std;
class A
{
    static int x;

public:
    static int y;
    void fun(int x)
    {
        cout << "value of the static variable is:" << A::x;
        cout << "value of local variable is:" << x;
    }
};
// explixity defined static variable
int A::x = 1;
int A::y = 2;
int main()
{
    A obj;
    obj.fun(y);
    cout << "\n A::y=" << A::y;
    return 0;
}
// if same variable name exist in two supper clases