#include <string>

class Book
{
public:
    Book(std::string n, std::string a, double p) : name(n), author(a), price(p) {}
    Book(std::string n) : Book(n, "", 0.0) {}
    Book() : Book("", "", 0.0) {}

private:
    std::string name;
    std::string author;
    double price;
};