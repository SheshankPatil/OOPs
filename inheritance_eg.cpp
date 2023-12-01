#include <iostream>
using namespace std;

class parent
{
public:
    int id_p;
};

class child : public parent
{
public:
    int id_c;
};

int main()
{
    child obj;
    cout << "enter child id and later parent id:" << endl;
    cin >> obj.id_c;
    cin >> obj.id_p;
    cout << "the child id is " << obj.id_c << endl;
    cout << "the parent id is " << obj.id_p << endl;

    return 0;
}
