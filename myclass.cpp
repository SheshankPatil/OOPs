#include <iostream>
using namespace std;

class myclass
{
public:
    int num;
    string str;
};
int main()
{
    myclass obj1, obj2, obj3, obj4, obj5;
    obj1.num = 1;
    obj2.num = 2;
    obj3.num = 3;
    obj4.num = 4;
    obj1.str = "get";
    obj2.str = "on";
    obj3.str = "the";
    obj4.str = "dance";
    obj5.str = "floor";
    cout << obj1.num << endl
         << obj2.num << endl
         << obj3.num << endl
         << obj4.num << endl cout << obj1.str << endl;
    << obj2.str << endl;
    << obj3.str << endl;
    << obj4.str << endl;
    << obj5.str << endl;
}