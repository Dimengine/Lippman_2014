#include <iostream>
#include <string>

struct Person
{
//public:
    Person() = default;
    Person(const std::string &s1) : name(s1) {}
    Person(const std::string &s1, const std::string &s2) : name(s1), address(s2) {}
    Person(std::istream &is);

    std::string getName() const { return name; }
    std::string getAddress() const { return address; }

//private:
    std::string name;
    std::string address;
};

std::istream &read(std::istream &is, Person &person)
{
    is >> person.name >> person.address;
    return is;
}

std::ostream &print(std::ostream &os, const Person &person)
{
    os << person.name << " " << person.address;
    return os;
}

Person::Person(std::istream &is)
{
    read(is, *this);
}