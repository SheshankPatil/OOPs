#include <iostream>
using namespace std;
inline int square(int length, int breadth)
{
    return length * breadth;
}
int main()
{
    cout << square(10, 15) << endl;
    return 0;
}