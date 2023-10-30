// write a cpp program for data encapulation for employe name emplye slaray employee id

#include <iostream>
using namespace std;

class X
{
private:
    int sal, id;
    string nam;

public:
    int setsal(int s)
    {
        sal = s;
    }
    int setid(int i)
    {
        id = i;
    }
    void setnam(string n)
    {
        nam = n;
    }
    int getsal()
    {
        return sal;
    }
    int getid()
    {
        return id;
    }
    string getnam()
    {
        return nam;
    }
};

int main()
{
    X x;
    x.setnam("sheshank");
    x.setid(69);
    x.setsal(699999);
    cout << "employe sallary=" << x.getsal() << endl;
    cout << "employe id=" << x.getid() << endl;
    cout << "employe name=" << x.getnam() << endl;
}