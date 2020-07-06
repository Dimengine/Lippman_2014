#include <string>
#include <iostream>

struct Sales_data
{
    Sales_data() = default;
    Sales_data(const std::string &s) : bookNo(s) {}
    Sales_data(const std::string &s, int n, double price) : bookNo(s), units_sold(n), revenue(n * price) {}
    Sales_data(std::istream &is);

    Sales_data &combine(const Sales_data&);
    std::string isbn() const { return bookNo; }

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

Sales_data::Sales_data(std::istream &is) 
{ 
    read(is, *this); 
}

int main() 
{
    Sales_data total(std::cin);
    if (std::cin) 
    {
        Sales_data trans;
        while (read(std::cin, trans)) 
        {
            if (total.isbn() == trans.isbn()) 
                total.combine(trans);
            else 
            {
                print(std::cout, total) << std::endl;
                total = trans;
            }
        }
        print(std::cout, total) << std::endl;
    } 
    else 
    {
        std::cerr << "No data!" << std::endl;
        return -1;
    }
}