#include <string>
#include <iostream>

struct Sales_data;
std::istream &read(std::istream &is, Sales_data &item);

struct Sales_data
{
    Sales_data() : bookNo(""), units_sold(0), revenue(0.0) {}
    Sales_data(const std::string &s) : bookNo(s) {}
    Sales_data(const std::string &s, int n, double price) : bookNo(s), units_sold(n), revenue(n * price) {}
    Sales_data(std::istream &is) { read(is, *this); }

    Sales_data &combine(const Sales_data&);
    std::string isbn() const { return bookNo; }

    std::string bookNo;
    unsigned units_sold;
    double revenue ;
};

Sales_data &Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

std::istream &read(std::istream &is, Sales_data &item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item)
{
    std::cout << item.isbn() << " " << item.units_sold << " " << item.revenue;
    return os;
}

int main() 
{
    Sales_data el1;
    Sales_data el2("Book2");
    Sales_data el3("Book3", 10, 12);
    Sales_data el4(std::cin);

    print(std::cout, el1) << std::endl;
    print(std::cout, el2) << std::endl;
    print(std::cout, el3) << std::endl;
    print(std::cout, el4) << std::endl;
}