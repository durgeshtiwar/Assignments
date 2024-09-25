#include<iostream>
#include<vector>
using namespace std;
int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int end = arr.size() - 1;
        int mid = start + (end - start)/2;
        while(start<=end)
        {
            if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1])
            {
                return mid;
            }else if(arr[mid-1]<arr[mid])
            {
                start = mid + 1;
            }else if(arr[mid-1]>arr[mid])
            {
                end = mid - 1;
            }
            mid = start + (end-start)/2;
        }
        return mid;
    }
    int main()
    {
        vector<int>num = {3,5,3,2,0};
        cout<<"------"<<peakIndexInMountainArray(num);
        return 0;
    }