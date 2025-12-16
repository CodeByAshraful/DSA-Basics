/*
Binary Search is a searching technique used to find a target value in a sorted array or list by repeatedly dividing the search range into two halves.
If the target is smaller than the middle element, it searches the left half; otherwise, it searches the right half.
This continues until the element is found or the range becomes empty.
*/
#include<bits/stdc++.h>
using namespace std;
int binary_Search(vector<int>&arr,int x)
{
    int low=0;
    int high=arr.size()-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(arr[mid]==x)//check if x is present at mid
        {
            return mid;
        }
        if(arr[mid]<x)//If x greater, ignore the half
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;//If x is smaller, ignore right half
        }
    }
    return -1;//If we reach here, then element was not present
}
int main()
{
    vector<int>arr={2,3,4,10,40};
    int x=10;
    int result = binary_Search(arr,x);
    if(result==-1)
    {
        cout<<"Element is not present in this array.";
    }
    else
    {
        cout<<"Element is present in this array at index : "<<result;
    }

    return 0;
}
/*
Time Complexity: O(log n)
Space Complexity: O(1) (Iterative version)
*/
