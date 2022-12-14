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
    float avg,sum=0;
    for(i=0;i<10;i++)
    {
        sum+=a[i];
    }
    avg = sum/i;
    printf("\nTotal avg is %.1f",avg);
    return 0;
} 