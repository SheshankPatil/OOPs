#include <iostream>
#include <string>

class Person
{
private:
    std::string name;

public:
    // Constructor
    Person(const std::string &n) : name(n)
    {
        std::cout << "Constructor called for " << name << std::endl;
    }

    // Destructor
    ~Person()
    {
        std::cout << "Destructor called for " << name << std::endl;
    }
};

int main()
{
    // Creating two Person objects
    Person person1("Alice");
    Person person2("Bob");

    // Objects go out of scope when main() ends

    return 0;
}
