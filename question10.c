#include<stdio.h>
int main()
{
    int a[5],i,b[5];
    printf("Enter five numbers:\n");
    for(i=0;i<5;i++)
    {
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        b[i]=a[i];
    }
    for(i=0;i<5;i++)
    {
        printf("b[%d]:%d\t",i,b[i]);
    }
    return 0;
}