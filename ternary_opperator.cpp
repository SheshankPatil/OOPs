#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "enter your two numbers for comp";
    cin >> a;
    cin >> b;
    cout << "the greater number is=" << (a >= b ? a : b);
}