// write a cpp program that contain employe details like employee name employee work sallary and itr deduction
#include <iostream>
#include <string>

class Employee
{
private:
    std::string name;
    double salary;
    double itrDeduction;

public:
    Employee(const std::string &empName, double empSalary, double empItrDeduction)
    {
        name = empName;
        salary = empSalary;
        itrDeduction = empItrDeduction;
    }

    void displayDetails()
    {
        std::cout << "Employee Name: " << name << std::endl;
        std::cout << "Employee Salary: $" << salary << std::endl;
        std::cout << "Income Tax Deduction: $" << itrDeduction << std::endl;
    }
};

int main()
{

    std::string empName;
    double empSalary, empItrDeduction;

    std::cout << "Enter Employee Name: ";
    std::cin >> empName;

    std::cout << "Enter Employee Salary: $";
    std::cin >> empSalary;

    std::cout << "Enter Income Tax Deduction: $";
    std::cin >> empItrDeduction;

    Employee employee(empName, empSalary, empItrDeduction);

    std::cout << "\nEmployee Details:\n";
    employee.displayDetails();

    return 0;
}
