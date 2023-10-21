#include <iostream>
using namespace std;

int p;
int main()
{
    int p = 10;
    cout << "the global variableis:" << ::p;
    cout << "the local variable is:" << p;
    return 0;
}