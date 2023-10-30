
#include <iostream>
using namespace std;

class myclass
{
public:
    int data = 5;

    void printdata()
    {
        cout << "data " << data << endl;
    }
};

int main()
{
    myclass obj;
    obj.printdata();
    return 0;
}
