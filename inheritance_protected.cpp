#include <iostream>
using namespace std;

class parent
{
protected:
    int id_p;

public:
};

class child : public parent
{
protected:
    int id_c;

};

int main()
{
    child obj;
    cout << "Enter child id and then parent id:" << endl;
    cin >> obj.id_c;
    cin >> obj.id_p;
    cout << "The child id is " << obj.id_c << endl;
    cout << "The parent id is " << obj.id_p << endl;

    return 0;
}
