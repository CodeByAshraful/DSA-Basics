#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>&arr,int low,int high,int x)
{
    if(low<=high)
    {
       int mid = low+(high-low)/2;

       if(arr[mid]==x)
       {
           return mid;
       }
       if(arr[mid]>x)
       {
          return binarySearch(arr,low,mid-1,x) ;
       }
       else
         return binarySearch(arr,mid+1,high,x) ;
    }
    return -1;
}
int main()
{
    vector<int>arr={2,3,4,10,40};
    int x=10;
    int n=arr.size();
    int result=binarySearch(arr,0,n-1,x);

    if(result==-1)
        cout<<"Element is not present in array";
    else
        cout<<"Element is present at index : "<<result;

    return 0;
}
