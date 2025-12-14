#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n-1; i++)
    {
        int smallestIdx = i;
        for(int j=i+1; j<n; j++)
        {
            if(a[j]<a[smallestIdx])
            {
                smallestIdx=j;
            }
        }
        int tmp = a[i];
        a[i]=a[smallestIdx];
        a[smallestIdx]=tmp;

    }
    for(int i=0; i<n; i++)
    {
       printf("%d ",a[i]);
    }


    return 0;
}
