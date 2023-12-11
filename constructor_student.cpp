#include <iostream>
using namespace std;

class student
{
    int r, s;

public:
    student(int student_num, int roll_num)
    {
        r = roll_num;
        s = student_num;
    }
    void show()
    {
        cout << s << " " << r << endl;
    }
};

int main()
{
    student obj(0, 0);
    for (size_t i = 0; i < 4; i++)
    {
        int student_num, roll_num;
        cin >> student_num >> roll_num;
        obj = student(student_num, roll_num);
        obj.show();
    }

    return 0;
}
