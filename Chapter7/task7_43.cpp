class NoDefault
{
public:
    NoDefault(int i) : a(i) {}
private:
    int a;
};

class C
{
public:
    C() : nd(0) {}
private:
    NoDefault nd;
};