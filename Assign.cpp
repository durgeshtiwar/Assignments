#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        int index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;
            }
        }
        int temp = arr[index];
        arr[index] = arr[i];
        arr[i] = temp;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
}
int main()
{
    int arr[] = {2, 7, 5, 3, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, size);
    return 0;
}