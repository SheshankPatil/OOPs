#include <iostream>
#include <string>
using namespace std;

class employee
{
private:
    string name;
    int age;
    string designation;

public:
    employee()
    {
        name = "";
        age = 0;
        designation = "";
    }
    employee(string empName, int empAge, string empDesignation)
    {
        name = empName;
        age = empAge;
        designation = empDesignation;
    }
    void displayDetails()
    {
        cout << "Name: " << name << "\nAge: " << age << "\nDesignation: " << designation << endl;
    }
};

int main()
{

    employee defaultEmployee;
    defaultEmployee.displayDetails();
    cout << endl;

    employee noEmployee("abhijeet", 19, "CEO_chaiwala");
    noEmployee.displayDetails();

    employee dangeremployee("sheshank", 21, "danger");
    dangeremployee.displayDetails();

    return 0;
}
