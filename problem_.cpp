// how neighbour class can acess member of inner class
#include <iostream>
using namespace std;

class A
{
private:
    int b;
    class B
    {
        int y;
        void main(A *a)
        {
            cout << "nested class" << a->b;
        }
    };
};

int main()
{
}