#include<iostream>
#include<vector>
using namespace std;
int peakIndexInMountainArray(vector<int>& arr) {
    int start = 0, end = arr.size()-1;
    int mid = start + (end - start)/2;
    while (end>start)
    {
        if (arr[mid]>=arr[0])
        {
            start = mid + 1;
        }else{
            end = mid;
        }
    }
    return start;
    
}
int main()
{
    vector<int>num = {12, 15, 18, 2, 4};
    cout<<"------"<<peakIndexInMountainArray(num);
    return 0;
}