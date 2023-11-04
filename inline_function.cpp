#include <iostream>
using namespace std;
inline int cube(int length)
{
    return length * length * length;
}
int main()
{
    cout << cube(10) << endl;
    return 0;
}