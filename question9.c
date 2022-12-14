#include<stdio.h>
int main()
{
    int a[6],i,n;
    printf("Enter the length of array:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("Normal order:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nReverse order:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }

    return 0;
}