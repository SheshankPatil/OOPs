#include <iostream>
using namespace std;

class a
{
public:
    void func();
};

// defining outsided class using(::)
void a::func()

{
    cout << "this is my class";
}

int main()
{
    a a;
    a.func();
    return 0;
}