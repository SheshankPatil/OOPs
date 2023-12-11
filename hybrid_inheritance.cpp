#include <iostream>
using namespace std;

class vehicle
{
public:
    vehicle()
    {
        cout << "this is a vehicle" << endl;
    }
};

class fare
{
public:
    fare()
    {
        cout << "fare of the vehicle" << endl;
    }
};

class car : public vehicle
{
};
class bus : public vehicle
{
};

int main()
{
    car obj;
    return 0;
}