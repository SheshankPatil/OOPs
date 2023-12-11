#include <iostream>
using namespace std;

class classA
{
public:
    int a;
    void show()
    {
        cout << "hello/n";
    }
};

class classB : virtual classA
{
public:
    int b;
};

class classC : virtual classA
{
public:
    int c;
};

class classD : public classB, public classC
{
public:
    int d;
};

int main()
{
    classD obj;
    obj.classB::a = 10;
    obj.classC::a = 20;
    obj.b = 1;
    obj.c = 2;
    obj.d = 3;

    cout << "a from classB: " << obj.classB::a << endl;
    cout << "a from classC: " << obj.classC::a << endl;
    cout << "b: " << obj.b << endl;
    cout << "c: " << obj.c << endl;
    cout << "d: " << obj.d << endl;

    return 0;
}
