#include <iostream>
using namespace std;

class Array
{
    int arr[100];
    const int size = 100;

public:
    void setArray(int index, int n)
    {
        if (index >= size)
        {
            cout << "Array Index out of bound Exception" << endl;
            exit(0);
        }
        arr[index] = n;
    }
    int operator[](int index)
    {
        if (index >= size)
        {
            cout << "Array Index out of bound Exception" << endl;
            exit(0);
        }
        return arr[index];
    }
    void display(int index)
    {
        if (index >= size)
        {
            cout << "Array Index out of bound Exception" << endl;
            exit(0);
        }
        cout << "Element which are present on given Index " << arr[index] << endl;
    }
};
int main()
{
    Array a1;
    a1.setArray(5, 10);
    a1.display(5);
    cout << a1[5];
    return 0;
}