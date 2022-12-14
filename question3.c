#include<stdio.h>
int main()
{
    int a[10],i,j,sume=0,sumo=0; // sume=sumof even number ,sumo=sum of odd number //
    printf("Enter 10 numbers:\n");
    for(i=0;i<10;i++)
    {
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }
    //for even number//
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
            sume+=a[i];
    }
    printf("\nsum of all even numbers is %d.\n",sume);
    //for odd number//
    for(i=0;i<10;i++)
    {
        if(a[i]%2!=0)
            sumo+=a[i];
    }
    printf("sum of all odd numbers is %d.\n",sumo);

    return 0;
}