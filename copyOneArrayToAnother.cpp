#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],copyArr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        copyArr[i]=arr[i];
    }
    for(int i=0; i<n; i++)
    {
        cout<<copyArr[i]<<" ";
    }

    return 0;
}