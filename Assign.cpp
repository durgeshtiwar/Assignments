#include <iostream>
#include <cstring>
using namespace std;

class MyString
{
    char *str;
    int size;

public:
    MyString()
    {
        cout << "Default Constructor Called" << endl;
        str = (char *)malloc(1);
        size = 1;
    }
    MyString(char *a)
    {
        cout << "Parameterized Constructor Called" << endl;
        size = strlen(a);
        str = (char *)malloc(size + 1);
        strcpy(str, a);
    }
    MyString(const MyString &a)
    {
        cout << "Copy Constructor Called" << endl;
        size = strlen(a.str);
        str = (char *)malloc(size + 1);
        strcpy(str, a.str);
    }
    MyString &operator=(const MyString &a)
    {
        cout << "Assignment Operator Called" << endl;
        // if (a == a.str)
        // {
        //     return *this;
        // }
        free(str);
        size = strlen(a.str);
        str = (char *)malloc(size + 1);
        strcpy(str, a.str);
        return *this;
    }
    void change(char *a)
    {
        free(str);
        size = strlen(a);
        str = (char *)malloc(size + 1);
        strcpy(str, a);
    }
    void display()
    {
        cout << "String is: " << str << endl;
    }
};
int main()
{
    MyString s1("Durgesh");
    MyString s2 = s1;
    MyString s3;
    MyString s4("Ayodhya");
    MyString s5;
    s3 = s1;
    s4 = s1;
    s5 = s4 = s1;
    s1.change("Tiwari");
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    s5.display();
    return 0;
}