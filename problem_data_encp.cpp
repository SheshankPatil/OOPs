// get and show any intger

#include <iostream>
using namespace std;

class I
{
private:
    int integer;

public:
    int setinteger(int i)
    {
        integer = i;
    }
    int getinteger()
    {
        return integer;
    }
};

int main()
{
    I i;
    i.setinteger(10);
    cout << "employe sallary=" << i.getinteger() << endl;
    return 0;
}
