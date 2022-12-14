#include<stdio.h>
int main()
{
    int a[10],i;
    printf("Enter 10 numbers:\n");
    for(i=0;i<10;i++)
    {
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }
    int max1=-1,max2=-2;
    for(i=0;i<10;i++)
    {
        if(max1<a[i])
        {
            max2=max1;
            max1=a[i];
        }
        else if(max2<a[i])
            max2=a[i];
    }
    printf("\nSecond largest number in array is %d",max2);

    return 0;
}