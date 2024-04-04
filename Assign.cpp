// 1. Write a function to find the greatest number from the given array of any size. (TSRS)
// 2. Write a function to find the smallest number from the given array of any size. (TSRS)
// 3. Write a function to sort an array of any size. (TSRS)
// 4. Write a function to rotate an array by n position in d direction. The d is an indicative
// value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
// d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
// 5. Write a function to find the first occurrence of adjacent duplicate values in the array.
// Function has to return the value of the element.
// 6. Write a function in C to read n number of values in an array and display it in reverse
// order.
// 7. Write a function in C to count a total number of duplicate elements in an array.
// 8. Write a function in C to print all unique elements in an array.
// 9. Write a function in C to merge two arrays of the same size sorted in descending
// order.
// 10. Write a function in C to count the frequency of each element of an array.

#include <iostream> 
using namespace std; 
void sortArray(int arr[],int n)
{
    for(int i = 0; i<n-1 ;i++)
    {
        for(int j = 1; j< n-i-1; j++)
        {
            if(arr[j] > arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        
        cout<<arr[i]<<",";
    }
}
int main()
{
    int arr[10] = {1,5,9,7,8,3,45,15,78,92};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout <<"The Sorted Array is : \n";
    sortArray(arr,n);
    return 0;
}