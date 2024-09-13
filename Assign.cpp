#include<iostream>
using namespace std;
void checkPowerOfTwo(int num)
{
    int rem;
    while (true)
    {
        rem = num%2;
        num = num/2;
        if (rem == 1)
        {
            cout<<"Given no is not a Power of 2";
            break;
        }
        if (num == 1)
        { 
            cout<<"Given num is a Power of 2";
            break;
        }
    }
}
int main()
{
    int num;
    cout<<"Enter the no.";
    cin>>num;
    checkPowerOfTwo(num);
    return 0;
}