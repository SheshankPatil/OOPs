// write a cpp proram to enter name roll number and grade of 5 students to read and display the content of the array
#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int roll_no;
    string gradex;
    student(string x, int roll, int grade)
    {
        name = x;
        roll_no = roll;
        gradex = grade;
    }
    void disaply()
    {
        cout << "name:" << name << endl
             << "roll no;" << roll_no << endl
             << "grade:" << gradex << endl;
    }
};
int main()
{
    student s1("sheshank", 130, "S+")
        s1.disaply();
}