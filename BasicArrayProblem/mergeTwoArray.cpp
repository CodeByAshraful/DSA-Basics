#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int arr1[n1],arr2[n2];
    for(int i=0; i<n1; i++)
    {
        cin>>arr1[i];
    }
    for(int i=0; i<n2; i++)
    {
        cin>>arr2[i];
    }
    int mergeArr[n1+n2];
    for(int i=0; i<n1; i++)
    {
       mergeArr[i]=arr1[i];
    }
    for(int i=0; i<n2; i++)
    {
        mergeArr[n1+i]=arr2[i];
    }
    for(int i=0; i<n1+n2; i++)
    {
        cout<<mergeArr[i]<<" ";
    }
    
    return 0;
}