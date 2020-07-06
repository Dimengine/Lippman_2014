#include <string>
#include <iostream>

class Sales_data
{
    friend std::istream &read(std::istream &is, Sales_data &item);
    friend std::ostream &print(std::ostream &os, const Sales_data &item);
    
public:
    Sales_data(const std::string &s) : bookNo(s) {}
    Sales_data(const std::string &s, int n, double price) : bookNo(s), units_sold(n), revenue(n * price) {}
    Sales_data(std::istream &is = std::cin) { read(is, *this); }

    Sales_data &combine(const Sales_data&);
    std::string isbn() const { return bookNo; }

private:
    double avg_price() const;
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data &Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

inline double Sales_data::avg_price() const
{
    return units_sold ? revenue / units_sold : 0;
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
    std::cout << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
    return os;
}

int main() 
{
    Sales_data sd1(std::cin);
    Sales_data sd2;
    Sales_data sd3("sd3");
    Sales_data sd4("sd4", 5, 10);

    print(std:: cout, sd1) << std::endl;
    print(std:: cout, sd2) << std::endl;
    print(std:: cout, sd3) << std::endl;
    print(std:: cout, sd4) << std::endl;
}