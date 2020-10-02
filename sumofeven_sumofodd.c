//to find sum of all even and odd numbers
#include<stdio.h>
void main()
{
    int a[10],i,se=0,so=0;
    printf("enter 10 numbers:");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    {
        if(a[i]%2==0)
            se=se+a[i];

        else
            so=so+a[i];
    }



    printf("sum of even numbers is %d:",se);
    printf("sum of odd numbers is%d",so);
    getch();

}
