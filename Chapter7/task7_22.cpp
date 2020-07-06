#include <iostream>
#include <string>

struct Person
{
    friend std::istream &read(std::istream &is, Person &person);
    
public:
    Person() = default;
    Person(const std::string &s1) : name(s1) {}
    Person(const std::string &s1, const std::string &s2) : name(s1), address(s2) {}
    Person(std::istream &is);

    std::string getName() const { return name; }
    std::string getAddress() const { return address; }

private:
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
    os << person.getName() << " " << person.getAddress();
    return os;
}

Person::Person(std::istream &is)
{
    read(is, *this);
}

int main()
{
    Person person1;
    Person person2("Person2");
    Person person3("Person3", "Address3");
    Person person4(std::cin);

    print(std::cout, person1) << std::endl;
    print(std::cout, person2) << std::endl;
    print(std::cout, person3) << std::endl;
    print(std::cout, person4) << std::endl;
}