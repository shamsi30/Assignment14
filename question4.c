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
    int max=a[0];
    for(i=1;i<10;i++)
    {
        if(max<a[i])
            max=a[i];
    }
    printf("\nGreatest number is %d",max);
    return 0;
}