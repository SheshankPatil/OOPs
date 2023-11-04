#include <iostream>
using namespace std;

inline int printsum(int a, int b)
{
    cout << a + b << endl;
}

int main()
{
    printsum(10, 20);
    printsum(30, 10);
    return 0;
}