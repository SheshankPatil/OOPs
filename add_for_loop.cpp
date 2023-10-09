#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int b, c;
    cin >> c;
    for (int i = 0; i < c; i++)
    {
        cout << "enter your nubers";
        cin >> b;
        a += b;
    }
    cout << "your addition is" << a;
    return 0;
}