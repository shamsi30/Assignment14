#include<stdio.h>
int main()
{
    int a[10],i;
    printf("Enter ten numbers:\n");
    for(i=0;i<10;i++)
    {
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }
    int sum=0;
    for(i=0;i<10;i++)
    {
        sum=sum+a[i];
    }
    printf("\n\nsum of total numbers in array is %d\n",sum);
    return 0;
}