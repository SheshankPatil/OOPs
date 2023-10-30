#include <iostream>
using namespace std;

class N
{
private:
    string name;

public:
    N(string n) : name(n)
    {
        cout << " constructor called for " << name << endl;
    }
    ~N()
    {
        cout << "des called for " << name << endl;
    }
};

int main()
{
    N person1("noice");
    N person2("good");

    return 0;
}