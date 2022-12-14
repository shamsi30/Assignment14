#include<stdio.h>
int main()
{
    int a[10],i,j;
    printf("Enter 10 numbers:\n");
    for(i=0;i<10;i++)
    {
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }
    int t;
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}