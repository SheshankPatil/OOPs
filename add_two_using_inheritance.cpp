#include <iostream>
using namespace std;
class adder
{
protected:
    int add(int a, int b)
    {
        return a + b;
    }
};

class simpleadd : public adder
{
public:
    simpleadd()
    {
    }
    int addnumber(int a, int b)
    {
        return add(a, b);
    }
};

int main()
{
    simpleadd simpleadd;

    int result = simpleadd.addnumber(3, 2);
    cout << "result of adding = " << result << endl;

    return 0;
}