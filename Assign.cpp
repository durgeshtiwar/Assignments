#include <iostream>
using namespace std;

class integer
{
    bool number = false;

public:
    bool operator!()
    {
        if (!number)
            return true;
        else
            return false;
    }
};
int main()
{
    integer i;
    if (!i)
    {
        cout << "This is Well Overloading of Operator !";
    }
    else
    {
        cout << "Overloading is Fail";
    }
    return 0;
}