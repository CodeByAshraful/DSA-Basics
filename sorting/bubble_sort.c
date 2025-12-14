#include<stdio.h>
int main()
{
    int size,n;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int a[size];
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter the elements : ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
            int tmp=a[j];
            a[j]=a[j+1];
            a[j+1]=tmp;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }



    return 0;
}
