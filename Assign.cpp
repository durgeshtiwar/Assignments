#include<iostream>
#include<limits>
using namespace std;
void smallestNumber(int arr[], int size)
{
    int targetNo = std::numeric_limits<int>::max();
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < targetNo)
        {
            targetNo = arr[i];
            index = i;
        }
        
    }
    cout<<"The Smallest No is = "<<targetNo<<" and it's index is = "<<index<<endl;
    
}
int main()
{
    int arr[5] = {4,5,7,2,9};
    smallestNumber(arr, 5);
    return 0;
}