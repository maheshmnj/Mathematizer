//Subscribed by Code House
// program to find sum of cubes of N natural numbers
#include<stdio.h>
int main()
{
    int n,sum;
    printf("enter the value of n:");
    scanf("%d",&n);
    sum=(n*n)*((n+1)*(n+1))/4;
    printf("sum of square of %d natural numbers=%d",n,sum);
}
