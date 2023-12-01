// write a cpp program to illustarte nested class using scope resulotion operation
#include <iostream>
using namespace std;

class A
{
private:
    class B
    {
    public:
        void print()
        
        {
            cout << "nested class is private" << endl;
        }
    };

    B n;

public:
    void show()
    {
        n.print();
    }
};
int main()
{
    A enc;
    enc.show();
    return 0;
}