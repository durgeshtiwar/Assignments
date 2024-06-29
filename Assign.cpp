#include <iostream>
using namespace std;
class Complex
{
    int real, imag;

public:
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }
    Complex() {}
    friend istream &operator>>(istream &is, Complex &c);
    friend ostream &operator<<(ostream &os, const Complex &c);
};
istream &operator>>(istream &is, Complex &c)
{
    cout << "Entr the Real Part Of Complex No.";
    is >> c.real;
    cout << "Enter the Imaginary Part Of Complex No.";
    is >> c.imag;
    return is;
}
ostream &operator<<(ostream &os, const Complex &c)
{
    os << c.real << "+" << c.imag << "i" << endl;
    return os;
}
int main()
{
    Complex c1;
    cin >> c1;
    cout << c1;
    return 0;
}