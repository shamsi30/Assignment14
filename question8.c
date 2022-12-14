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
    int min1=12,min2=11;
    for(i=0;i<10;i++)
    {
        if(min1>a[i])
        {
            min2=min1;
            min1=a[i];
        }
        else if(min2>a[i])
            min2=a[i];
    }
    printf("\nSecond smallest number is %d",min2);

    return 0;
}