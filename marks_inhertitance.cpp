#include <iostream>
using namespace std;

class student
{
    int roll;
    int marks1;
    int marks2;

public:
    student(int r, int m1, int m2) : roll(r), marks1(m1), marks2(m2) {}

    int get_roll() const
    {
        return roll;
    }

    int get_marks1() const
    {
        return marks1;
    }

    int get_marks2() const
    {
        return marks2;
    }
};

class project
{
protected:
    int proj;

public:
    project(int p) : proj(p) {}
    int get_project() const
    {
        return proj;
    }
};

class result : public student, public project
{
public:
    result(int r, int m1, int m2, int p) : student(r, m1, m2), project(p) {}

    void displayResult() const
    {
        int total = get_marks1() + get_marks2() + get_project();
        float average = total / 3;

        cout << "Roll:" << get_roll() << endl;
        cout << "Marks 1:" << get_marks1() << endl;
        cout << "Marks 2:" << get_marks2() << endl;
        cout << "Project:" << get_project() << endl;
        cout << "Total:" << total << endl;
        cout << "Average:" << average << endl;
    }
};

int main()
{
    result studentResult(30, 66, 5, 95);
    studentResult.displayResult();

    return 0;
}
