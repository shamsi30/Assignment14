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
    int small=a[0];
    for(i=1;i<10;i++)
    {
        if(small>a[i])
            small=a[i];
    }
    printf("\nSmallest number is %d",small);

    return 0;
}