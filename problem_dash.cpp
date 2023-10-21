#include <iostream>
#include <string>

class Student
{
public:
    std::string name;
    int roll_no;
    std::string grade;

    // Constructor to initialize the student's information
    Student(const std::string &x, int roll, const std::string &grade)
    {
        name = x;
        roll_no = roll;
        this->grade = grade;
    }

    // Method to display the student's information
    void display()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll No: " << roll_no << std::endl;
        std::cout << "Grade: " << grade << std::endl;
    }
};

int main()
{
    // Create an array to store information for 5 students
    Student students[5];

    // Input information for 5 students
    for (int i = 0; i < 5; i++)
    {
        std::string name;
        int roll_no;
        std::string grade;

        std::cout << "Enter student #" << i + 1 << " details:" << std::endl;
        std::cout << "Name: ";
        std::cin >> name;
        std::cout << "Roll No: ";
        std::cin >> roll_no;
        std::cout << "Grade: ";
        std::cin >> grade;

        students[i] = Student(name, roll_no, grade);
    }

    // Display information for all 5 students
    for (int i = 0; i < 5; i++)
    {
        std::cout << "\nStudent #" << i + 1 << " Details:" << std::endl;
        students[i].display();
    }

    return 0;
}
